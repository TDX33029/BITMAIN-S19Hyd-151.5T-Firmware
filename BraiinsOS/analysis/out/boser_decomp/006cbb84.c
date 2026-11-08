// FUN_006cbb84 @ 006cbb84 size=212 calls_out=4 calls_in=1
// strings: 

void FUN_006cbb84(int *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [40];
  
  puVar1 = (ulonglong *)(param_1 + 2);
  if (*param_1 == 0) {
    uVar5 = FUN_01415f98(auStack_38,0,(int)*puVar1,param_1[3]);
  }
  else if (*param_1 == 1) {
    uVar5 = FUN_0196bd9c(auStack_38,1,(int)*puVar1,param_1[3]);
  }
  else {
    uVar4 = *puVar1;
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((int)uVar4 == 0 && (uVar4 & 0xfffff00000000) == 0) {
      if ((int)uVar4 == 0 && (uVar3 & 0x7fffffff) == 0x7ff00000) goto LAB_006cbc0c;
    }
    else if (0x7fefffff < (uVar3 & 0x7fffffff)) {
LAB_006cbc0c:
      FUN_01ac6cbc(param_2,&DAT_0056d030,4);
      return;
    }
    iVar2 = FUN_01afb0f8(auStack_38);
    uVar5 = CONCAT44(iVar2 - (int)auStack_38,auStack_38);
  }
  FUN_01ac6cbc(param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return;
}

