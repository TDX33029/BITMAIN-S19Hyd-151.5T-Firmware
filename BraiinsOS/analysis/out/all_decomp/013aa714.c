// FUN_013aa714 @ 013aa714 size=392 calls_out=4 calls_in=0
// strings: 

void FUN_013aa714(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = param_3[4];
  uVar4 = param_3[5];
  if (uVar4 < uVar3) {
    return;
  }
  uVar2 = param_3[3];
  if (*param_3 - 1U < 2) {
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,uVar4,uVar2,&DAT_01894428);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    if (uVar4 - uVar3 < uVar2) {
      return;
    }
    iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0x3c),param_3[2] + uVar3,uVar2);
    if (iVar1 != 0) {
      return;
    }
    if (CARRY4(uVar3,uVar2)) {
LAB_013aa788:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  else {
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,uVar4,uVar2,&DAT_01894418);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    local_1c = 0;
    local_20 = 1;
    if (uVar4 - uVar3 < uVar2) {
      return;
    }
    uVar5 = (**(code **)(param_1 + 0x30))
                      (param_1,&local_20,param_3[2] + uVar3,uVar4 - uVar3,
                       *(undefined4 *)(param_1 + 0x3c),uVar2);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (CARRY4((int)(uVar5 >> 0x20) + uVar3,uVar2)) goto LAB_013aa788;
  }
  if (param_4[1] == 0) {
    local_1c = 0;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_20,&DAT_018943f8,&DAT_018943e8);
  }
  if (*(char *)*param_4 == '\0') {
    iVar1 = param_4[2];
    *(char *)*param_4 = '\x01';
    param_4[2] = iVar1 + 1;
    return;
  }
  return;
}

