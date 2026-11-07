// FUN_018eef08 @ 018eef08 size=308 calls_out=4 calls_in=1
// strings: 

void FUN_018eef08(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  iVar1 = (**(code **)(param_2 + 0xac))(param_3,param_4);
  if (iVar1 != 0) {
    local_a0 = *(undefined4 *)(param_2 + 8);
    uStack_9c = *(undefined4 *)(param_2 + 0xc);
    uStack_98 = *(undefined4 *)(param_2 + 0x10);
    uStack_94 = *(undefined4 *)(param_2 + 0x14);
    local_90 = *(undefined4 *)(param_2 + 0x18);
    uStack_8c = *(undefined4 *)(param_2 + 0x1c);
    uStack_88 = *(undefined4 *)(param_2 + 0x20);
    uStack_84 = *(undefined4 *)(param_2 + 0x24);
    uStack_80 = *(undefined4 *)(param_2 + 0x28);
    local_7c = *(undefined4 *)(param_2 + 0x2c);
    uStack_78 = *(undefined4 *)(param_2 + 0x30);
    uStack_74 = *(undefined4 *)(param_2 + 0x34);
    uStack_70 = *(undefined4 *)(param_2 + 0x38);
    piVar3 = *(int **)(param_2 + 0x3c);
    iVar1 = *piVar3;
    local_6c = piVar3;
    if (*(char *)(**(int **)(param_2 + 4) + 0x14) == *(char *)(iVar1 + 0x14)) {
      FUN_01bed93e(&local_58,0,0x30);
      uVar4 = *(uint *)(iVar1 + 0x10);
      if (0x30 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar4,0x30,&DAT_01d255f8);
      }
      iVar1 = (*(code *)piVar3[1])(&local_58,uVar4,&local_a0,param_3,param_4);
      if (iVar1 == 0) {
        FUN_0190def0(&local_68,&local_58,uVar4);
        if (local_68 != -0x80000000) {
          local_58 = local_64;
          uStack_54 = uStack_60;
          uStack_50 = uStack_5c;
          param_1[1] = local_68;
          param_1[2] = local_64;
          param_1[3] = uStack_60;
          param_1[4] = uStack_5c;
          puVar2 = (undefined1 *)0x80000029;
          goto LAB_018eefe8;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0x1a;
  puVar2 = &DAT_8000001c;
LAB_018eefe8:
  *param_1 = puVar2;
  thunk_FUN_01be4678(param_2);
  return;
}

