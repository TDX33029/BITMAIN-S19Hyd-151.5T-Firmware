// FUN_01bef91c @ 01bef91c size=152 calls_out=9 calls_in=1
// strings: /proc/self/task/%d/comm

undefined4 FUN_01bef91c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined1 auStack_34 [36];
  
  uVar1 = FUN_01bedc64(param_2,0x10);
  if (uVar1 < 0x10) {
    iVar2 = FUN_01bef8f4();
    if (param_1 == iVar2) {
      iVar2 = FUN_01be3ec4(0xf,param_2,0,0,0);
      uVar5 = 0;
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_01be3244();
        uVar5 = *puVar3;
      }
    }
    else {
      FUN_01beb79e(auStack_34,0x22,"/proc/self/task/%d/comm",*(undefined4 *)(param_1 + 0x10));
      FUN_01bef8fc(1,&local_38);
      iVar2 = FUN_01be34a6(auStack_34,0x80001);
      if (iVar2 < 0) {
        puVar3 = (undefined4 *)FUN_01be3244();
        uVar5 = *puVar3;
      }
      else {
        iVar4 = FUN_01bf053e(iVar2,param_2,uVar1);
        if (iVar4 < 0) {
          puVar3 = (undefined4 *)FUN_01be3244();
          uVar5 = *puVar3;
        }
        else {
          uVar5 = 0;
        }
        FUN_01bf01d6(iVar2);
      }
      FUN_01bef8fc(local_38,0);
    }
  }
  else {
    uVar5 = 0x22;
  }
  return uVar5;
}

