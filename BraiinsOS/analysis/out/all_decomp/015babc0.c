// FUN_015babc0 @ 015babc0 size=456 calls_out=2 calls_in=1
// strings: 

void FUN_015babc0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,uint param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  
  uVar2 = (**(code **)(param_2[7] + 0x14))(param_2[6]);
  if (*(char *)(param_2 + 8) == '\0') {
    if (param_6 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_4,param_6,&DAT_018aa568);
    }
    FUN_016dd1aa(param_5,param_3,param_4);
joined_r0x015bac70:
    if (param_6 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_4,param_6,&DAT_018aa578);
    }
    uVar4 = param_2[6];
    iVar5 = param_2[7];
    uVar2 = (**(code **)(iVar5 + 0x14))(uVar4);
    (**(code **)(iVar5 + 0x18))(uVar4);
    if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,0x40,&DAT_018aa5a8);
    }
    pcVar6 = *(code **)(iVar5 + 0x1c);
    (*pcVar6)(uVar4,(int)param_2 + 0x21,uVar2);
    (*pcVar6)(uVar4,param_5,param_4);
    (**(code **)(param_2[7] + 0x20))(param_2[6],(int)param_2 + 0x21,0x40);
    *(uint *)(param_1 + 4) = param_4;
    *param_1 = 0;
    return;
  }
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x40,&DAT_018aa588);
  }
  uVar1 = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar1 = 8;
    if (!CARRY4(uVar3,(uint)(0xfffffffe < uVar2))) {
      param_4 = (**(code **)(param_2[1] + 0x14))(*param_2);
      param_2[2] = uVar2 + 1;
      param_2[3] = uVar3 + (0xfffffffe < uVar2);
      goto joined_r0x015bac70;
    }
  }
  param_1[2] = uVar1;
  param_1[1] = 3;
  *param_1 = 1;
  return;
}

