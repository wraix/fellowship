#ifndef FELLOWSHIP_MGR_H
#define FELLOWSHIP_MGR_H

class FellowshipMgr {
private:

    bool bEnable;

    // Private because of singleton pattern.
    FellowshipMgr();

public:
    static FellowshipMgr* instance()
    {
        static FellowshipMgr instance;
        return &instance;
    }

    ~FellowshipMgr();
    void InitializeConfiguration();
    void Initialize();    

};

#define sFellowshipMgr FellowshipMgr::instance()

#endif
