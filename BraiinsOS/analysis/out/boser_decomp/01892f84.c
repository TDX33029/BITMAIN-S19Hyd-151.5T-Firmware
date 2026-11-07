// FUN_01892f84 @ 01892f84 size=272 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_01892f84(undefined4 param_1,uint param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_43c;
  uint local_438;
  int local_434;
  int local_430 [257];
  undefined1 auStack_2c [12];
  
  local_430[0] = param_3[4];
  local_43c = param_4;
  if (param_4 == local_430[0]) {
    iVar1 = param_3[1];
    uVar2 = *param_3;
    local_434 = iVar1 << 1;
    local_438 = param_2;
    if (param_2 == iVar1 * 2) {
      FUN_01bed93e(local_430,0,0x400);
      if (0x100 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_2,0x100,&DAT_01d216d4);
      }
      FUN_01bed4e2(local_430,param_1,param_2 << 2);
      FUN_0189ba04(auStack_2c,iVar1);
      uVar3 = FUN_0189b9a4(auStack_2c);
      FUN_01896900((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),local_430,param_2,uVar2,iVar1,
                   param_3 + 2);
      return uVar3;
    }
  }
  else {
    FUN_0189b5f0(&local_43c,local_430,&DAT_01d216b4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01304210(0,&local_438,&local_434,0);
}

