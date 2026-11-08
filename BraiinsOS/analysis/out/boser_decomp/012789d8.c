// FUN_012789d8 @ 012789d8 size=340 calls_out=6 calls_in=1
// strings: support_archivestruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig

void FUN_012789d8(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int extraout_r2;
  uint uVar5;
  uint uVar6;
  int local_28;
  int *piStack_24;
  int local_20;
  undefined1 uStack_19;
  
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar6 = *(byte *)(*(int *)(param_2 + 0xc) + uVar5) - 9;
      if (0x19 < uVar6) {
LAB_01278b04:
        uVar2 = FUN_012c7788(param_2,&uStack_19,&DAT_01c25810);
LAB_01278b18:
        uVar2 = FUN_0127dee8(uVar2,param_2);
        *(undefined4 *)(param_1 + 4) = uVar2;
        uVar1 = 1;
LAB_01278ac4:
        *param_1 = uVar1;
        return;
      }
      if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) {
        if (uVar6 != 0x19) goto LAB_01278b04;
        *(undefined4 *)(param_2 + 8) = 0;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        FUN_01968828(&local_28,(int *)(param_2 + 0xc),param_2);
        if (local_28 == 2) {
          uVar1 = 1;
          *(int **)(param_1 + 4) = piStack_24;
          goto LAB_01278ac4;
        }
        if (local_20 == 0xf) {
          iVar3 = thunk_FUN_01bed842(piStack_24,
                                     "support_archivestruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig"
                                     ,0xf);
          uVar4 = 0;
          if (iVar3 != 0) {
LAB_01278aec:
            uVar2 = FUN_0127b554(piStack_24,local_20,&DAT_01c25900);
            goto LAB_01278b18;
          }
        }
        else {
          iVar3 = extraout_r2;
          uVar4 = extraout_r1;
          if (local_20 == 4) {
            local_28 = *piStack_24;
            uVar4 = 1;
            iVar3 = 0x676e6970;
          }
          if (local_20 != 4 || local_28 != iVar3) goto LAB_01278aec;
        }
        uVar1 = 0;
        param_1[1] = uVar4;
        goto LAB_01278ac4;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (*(uint *)(param_2 + 0x10) != uVar5);
  }
  local_28 = 5;
  uVar2 = FUN_012c6b30(param_2,&local_28);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

