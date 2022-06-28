class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        vector<double> ans;
        for(int i=0;i<256;i++)
        {
            if(count[i]>0)
            {
                ans.push_back(double(i));
                break;
            }
        }
        for(int i=255;i>=0;i--)
        {
            if(count[i]>0)
            {
                ans.push_back(double(i));
                break;
            }
        }
        double avg=0;
        double temp=0;
        int freq=0;
        for(int i=0;i<256;i++)
        {
            freq+=count[i];
        }
        int even_odd=-1;
        if(freq%2==1)
        {
            even_odd=1;
        }
        else
        {
            even_odd=0;
        }
        
        for(int i=0;i<256;i++)
        {
            if(count[i]>0)
            {
                temp= i*(count[i]/(double)freq);
                avg+=temp;
                
            }
        }
         ans.push_back(avg);
        
        int median=0;
        if(even_odd==1)
        {
            int index=freq/2;
            int freqreq=index+1;
            int freqtemp=0;
            for(int i=0;i<256;i++)
            {
                freqtemp+=count[i];
                if(freqtemp>=freqreq)
                {
                    median=i;
                    break;
                }
                
            }
        }
        else
        {
            int index=freq/2;
            int freqreq=index+1;
            int freqtemp=0;
            int med1=0,med2=0;
            for(int i=0;i<256;i++)
            {
                freqtemp+=count[i];
                if(freqtemp>=freqreq)
                {
                    
                    med1=i;
//cout<<med1<<endl;
                    break;
                }
                
            }
            freqtemp=0;
            freqreq-=1;
             for(int i=0;i<256;i++)
            {
                freqtemp+=count[i];
                if(freqtemp>=freqreq)
                {
                    
                    med2=i;
                    //cout<<med2<<endl;
                    break;
                }
                
            }
            median=med1+med2;
//cout<<median<<endl;
            
        }
         if(even_odd==1)
         {
             ans.push_back(double(median));
         }
        else
        {
            //cout<<median<<endl;
            double temp=(double)median/2;
             ans.push_back(temp);
        }
        
        
        
        
        
        
        
        int mode=0;
        int modef=count[0];
         for(int i=0;i<255;i++)
        {
            if(count[i]>modef)
            {
                mode=i;
                modef=count[i];
            }
        }
        ans.push_back(double(mode));
        return ans;
    }
};