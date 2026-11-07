// FUN_01afd4b8 @ 01afd4b8 size=216 calls_out=5 calls_in=1
// strings: 

void FUN_01afd4b8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01afd27c(param_1,auStack_34,1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_01afd168(auStack_34,-(param_2 != 0)), iVar1 != 0)) {
    uVar4 = FUN_01afca7c(param_1);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar2 = 1;
      goto LAB_01afd514;
    }
  }
  FUN_01afc5c8(param_1);
  uVar2 = 0;
  uVar3 = extraout_r1;
LAB_01afd514:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_1c ^ DAT_01d53560,0);
  }
  return;
}

