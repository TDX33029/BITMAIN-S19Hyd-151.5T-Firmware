// FUN_0196a980 @ 0196a980 size=264 calls_out=5 calls_in=3
// strings: 

undefined4 FUN_0196a980(int *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (ulonglong *)(param_1 + 2);
  if (*param_1 == 0) {
    uVar6 = FUN_01415f98(&local_40,0,(int)*puVar1,param_1[3]);
LAB_0196a9bc:
    uVar3 = *param_2;
  }
  else {
    if (*param_1 == 1) {
      uVar6 = FUN_0196bd9c(&local_40,1,(int)*puVar1,param_1[3]);
      goto LAB_0196a9bc;
    }
    uVar5 = *puVar1;
    uVar4 = (uint)(uVar5 >> 0x20);
    if ((int)uVar5 == 0 && (uVar5 & 0xfffff00000000) == 0) {
      if ((int)uVar5 == 0 && (uVar4 & 0x7fffffff) == 0x7ff00000) {
LAB_0196aa14:
        FUN_01968ab4(&local_40,*param_2,&DAT_0056d030,4);
        if ((char)local_40 == '\x04') {
          return 0;
        }
        local_18 = local_40;
        local_14 = uStack_3c;
        goto LAB_0196aa80;
      }
    }
    else if (0x7fefffff < (uVar4 & 0x7fffffff)) goto LAB_0196aa14;
    iVar2 = FUN_01afb0f8(&local_40);
    uVar3 = *param_2;
    uVar6 = CONCAT44(iVar2 - (int)&local_40,&local_40);
  }
  FUN_01968ab4(&local_18,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  if ((char)local_18 == '\x04') {
    return 0;
  }
LAB_0196aa80:
  uVar3 = FUN_01966f50(local_18,local_14);
  return uVar3;
}

