// FUN_00e17fe0 @ 00e17fe0 size=268 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

int FUN_00e17fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_128 [66];
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar7 = thunk_FUN_016de0ee(0,param_2,0x40);
  iVar2 = (int)uVar7 + extraout_r2;
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 0x38) == '\x01') {
LAB_00e18054:
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    uVar4 = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x18) = uVar5;
    *(undefined4 *)(iVar2 + 0x1c) = uVar6;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    if (*(char *)(iVar2 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar2,FUN_01655ec4);
      *(undefined1 *)(iVar2 + 0x38) = 1;
      goto LAB_00e18054;
    }
  }
  iVar1 = FUN_00f0bcb8(param_1 + 0x18,(int)((ulonglong)uVar7 >> 0x20));
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') goto joined_r0x00e180c4;
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
joined_r0x00e180c4:
  if (iVar1 == 0) {
    local_128[0] = 2;
    FUN_00e1811c(param_1,local_128);
    return 0;
  }
  return iVar1;
}

