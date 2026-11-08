// FUN_016df6b0 @ 016df6b0 size=152 calls_out=9 calls_in=1
// strings: /proc/self/task/%d/comm

undefined4 FUN_016df6b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined1 auStack_34 [36];
  
  uVar1 = FUN_016dd92c(param_2,0x10);
  if (uVar1 < 0x10) {
    iVar2 = FUN_016df688();
    if (param_1 == iVar2) {
      iVar2 = FUN_016d380e(0xf,param_2,0,0,0);
      uVar5 = 0;
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_016d2bc8();
        uVar5 = *puVar3;
      }
    }
    else {
      FUN_016db462(auStack_34,0x22,"/proc/self/task/%d/comm",*(undefined4 *)(param_1 + 0x10));
      FUN_016df690(1,&local_38);
      iVar2 = FUN_016d2e2a(auStack_34,0x80001);
      if (iVar2 < 0) {
        puVar3 = (undefined4 *)FUN_016d2bc8();
        uVar5 = *puVar3;
      }
      else {
        iVar4 = FUN_016e034e(iVar2,param_2,uVar1);
        if (iVar4 < 0) {
          puVar3 = (undefined4 *)FUN_016d2bc8();
          uVar5 = *puVar3;
        }
        else {
          uVar5 = 0;
        }
        FUN_016dffb2(iVar2);
      }
      FUN_016df690(local_38,0);
    }
  }
  else {
    uVar5 = 0x22;
  }
  return uVar5;
}

