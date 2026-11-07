// FUN_0158e4e0 @ 0158e4e0 size=416 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_0158e4e0(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 local_54 [3];
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  
  uVar6 = 0;
  if (*param_2 == '\x04') {
    iVar5 = *(int *)(param_2 + 0xc) * 0x18;
    iVar3 = 0;
    pcVar4 = *(char **)(param_2 + 8);
    do {
      pcVar8 = pcVar4;
      iVar7 = iVar3;
      if (iVar5 == 0) {
        return 0;
      }
      if (*pcVar8 != '\x02') break;
      iVar5 = iVar5 + -0x18;
      iVar3 = iVar7 + 1;
      pcVar4 = pcVar8 + 0x18;
    } while (*(int *)(pcVar8 + 8) != 2 || *(int *)(pcVar8 + 0xc) != 0);
    piVar9 = (int *)*param_1;
    do {
      iVar5 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_0158e67c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x158e67c);
      (*pcVar1)();
    }
    uVar12 = param_1[1];
    if (param_4 == 0) {
      local_54[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar10 = *(int **)(param_4 + 0xc);
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0158e67c;
      piVar13 = piVar9 + 2;
      uVar6 = *(undefined4 *)(param_4 + 0x10);
      uVar11 = (*(int **)(param_4 + 4))[1];
      if (uVar12 < uVar11) {
        uVar11 = 0;
      }
      else {
        iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar13,uVar11);
        if (iVar5 != 0) {
          uVar11 = 0;
        }
        piVar13 = (int *)((int)piVar13 + uVar11);
      }
      local_3c = FUN_016bc0ec(piVar13,uVar12 - uVar11);
      local_48 = 3;
      local_54[0] = 2;
      local_44 = piVar10;
      local_40 = uVar6;
    }
    local_34 = 0x80000001;
    local_30 = iVar7;
    local_28 = param_3;
    uVar14 = FUN_01531840(&local_34);
    uVar6 = FUN_01595634(piVar9,uVar12,local_54,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),pcVar8,
                         4);
  }
  return uVar6;
}

