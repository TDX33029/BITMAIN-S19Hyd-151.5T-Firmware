// FUN_0002c9f4 @ 0002c9f4  size=268  callers=5
// program: bmminer


void FUN_0002c9f4(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined1 auStack_38 [12];
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0002a6f0(uVar2);
    if ((iVar1 != 0) && (param_1 == uVar2 || param_1 == 0xff)) {
      if (param_2 == 1) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_000c0460);
        FUN_0004bd34(auStack_38);
        uVar3 = FUN_0004c05c(auStack_38,&DAT_000c0478);
        if ((double)CONCAT44(extraout_s1,uVar3) < 0.006) {
          FUN_0004bf94(5000,0);
        }
        FUN_00081a54(uVar2 & 0xff,1,param_3,param_4);
        iVar1 = FUN_0002a514();
        iVar1 = iVar1 * 0x29 + 5000;
        FUN_0004bf94(iVar1,iVar1 >> 0x1f);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c0460);
      }
      else {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_000c0460);
        FUN_00081a54(uVar2 & 0xff,param_2,param_3,param_4);
        FUN_0004bd34(&DAT_000c0478);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c0460);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

