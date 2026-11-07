// FUN_0150df10 @ 0150df10 size=396 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0150df10(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint local_68 [3];
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar4 = 0;
  if (*param_2 == '\x05') {
    local_68[2] = *(uint *)(param_2 + 4);
    local_5c = *(undefined4 *)(param_2 + 8);
    local_48 = *(undefined4 *)(param_2 + 0xc);
    if (local_68[2] == 0) {
      local_48 = 0;
    }
    local_68[0] = (uint)(local_68[2] != 0);
    local_54 = 0;
    local_68[1] = 0;
    local_58 = local_68[0];
    local_50 = local_68[2];
    local_4c = local_5c;
    uVar10 = FUN_01a41998(local_68);
    if ((int)uVar10 != 0) {
      piVar5 = (int *)*param_1;
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0150e098:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x150e098);
        (*pcVar1)();
      }
      uVar9 = param_1[1];
      if (param_4 == 0) {
        local_44[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar6 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0150e098;
        uVar4 = *(undefined4 *)(param_4 + 0x10);
        piVar8 = piVar5 + 2;
        uVar7 = (*(int **)(param_4 + 4))[1];
        if (uVar9 < uVar7) {
          uVar7 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar8,uVar7);
          if (iVar3 != 0) {
            uVar7 = 0;
          }
          piVar8 = (int *)((int)piVar8 + uVar7);
        }
        local_2c = FUN_016bc0ec(piVar8,uVar9 - uVar7);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = piVar6;
        local_30 = uVar4;
      }
      uVar11 = FUN_01531840(param_3);
      uVar4 = FUN_015946b8(piVar5,uVar9,local_44,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),
                           (int)((ulonglong)uVar10 >> 0x20));
    }
  }
  return uVar4;
}

