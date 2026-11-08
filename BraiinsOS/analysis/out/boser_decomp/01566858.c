// FUN_01566858 @ 01566858 size=192 calls_out=5 calls_in=0
// strings: 

undefined8
FUN_01566858(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_01577618(param_1,param_2,param_5);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_00000001;
    ppuVar3 = (undefined **)&UNK_01cfc1a4;
  }
  else {
    uVar4 = FUN_01576990(param_1 + 0x14,param_2,param_3,param_4,param_5);
    FUN_014ff278(&iStack_34,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    local_20 = iStack_34;
    local_1c = iStack_30 + iStack_2c * 4;
    local_28 = iStack_30;
    local_24 = iStack_30;
    piVar2 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar3 = &PTR_LAB_01cfbbc4;
    *piVar2 = local_28;
    piVar2[1] = local_24;
    piVar2[2] = local_20;
    piVar2[3] = local_1c;
  }
  return CONCAT44(ppuVar3,piVar2);
}

