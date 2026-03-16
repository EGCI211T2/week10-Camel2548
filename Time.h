struct Time{
	int h,m,s;
};


void getTime(struct Time &t){
    cout << "Input Time( h m s): ";
    cin >> t.h >> t.m >> t.s;
}


struct Time subtract (struct Time t2, struct Time t1){
    
    struct Time t3; 
    
    int t1all = (t1.h * 3600) + (t1.m * 60) + (t1.s * 1);
    int t2all = (t2.h * 3600) + (t2.m * 60) + (t2.s * 1);
    
    if (t2all < t1all) {
        t2all = t2all + 86400; 
    }
    
    int t3all = t2all - t1all;
    
    t3.h = t3all / 3600;
    t3.m = (t3all % 3600) / 60;  
    t3.s = t3all % 60;          
    
    return t3;
}


void display(struct Time t3){
     cout<<setfill('0')<<setw(2)<<t3.h<<":"<<setfill('0')<<setw(2)<<t3.m<<":"<<setfill('0')<<setw(2)<<t3.s;
}