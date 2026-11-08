// FUN_00df3fd8 @ 00df3fd8 size=412 calls_out=6 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

undefined8 FUN_00df3fd8(int param_1,undefined4 param_2)

{
  char cVar1;
  int extraout_r2;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_16d8 [1453];
  
  piVar2 = (int *)(param_1 + 0x10);
  if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar8 = thunk_FUN_016de0ee(0,param_2,0x40);
  iVar3 = (int)uVar8 + extraout_r2;
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar3 + 0x38) == '\x01') {
LAB_00df4058:
    uVar6 = *(undefined4 *)(iVar3 + 0x18);
    uVar7 = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x18) = uVar4;
    *(undefined4 *)(iVar3 + 0x1c) = uVar5;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    if (*(char *)(iVar3 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar3,FUN_01655ec4);
      *(undefined1 *)(iVar3 + 0x38) = 1;
      goto LAB_00df4058;
    }
  }
  uVar8 = FUN_00df4208(param_1 + 0x18,(int)((ulonglong)uVar8 >> 0x20));
  if (*(char *)(iVar3 + 0x38) == '\x01') {
LAB_00df40bc:
    cVar1 = '\x01';
    *(undefined4 *)(iVar3 + 0x18) = uVar6;
    *(undefined4 *)(iVar3 + 0x1c) = uVar7;
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  else {
    if (*(char *)(iVar3 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar3,FUN_01655ec4);
      *(undefined1 *)(iVar3 + 0x38) = 1;
      goto LAB_00df40bc;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    cVar1 = '\x02';
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  local_16d8[0] = 2;
  if (cVar1 != '\x01') {
    uVar6 = 0;
    uVar7 = 0;
    if (cVar1 == '\x02') goto LAB_00df4114;
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  uVar6 = *(undefined4 *)(iVar3 + 0x18);
  uVar7 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  *(undefined4 *)(iVar3 + 0x1c) = uVar5;
LAB_00df4114:
  FUN_00de132c(piVar2);
  FUN_016dd1aa(piVar2,local_16d8,0x16b0);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return uVar8;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar6;
  *(undefined4 *)(iVar3 + 0x1c) = uVar7;
  return uVar8;
}

