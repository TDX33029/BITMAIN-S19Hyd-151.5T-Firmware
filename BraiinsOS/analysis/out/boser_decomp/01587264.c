// FUN_01587264 @ 01587264 size=392 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01587264(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 local_54 [3];
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  
  uVar4 = 0;
  if (*param_2 == '\x04') {
    iVar10 = -1;
    pcVar7 = (char *)(*(int *)(param_2 + 8) + -0x18);
    iVar3 = *(int *)(param_2 + 0xc) * 0x18;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      pcVar7 = pcVar7 + 0x18;
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + -0x18;
    } while (*pcVar7 == '\x01');
    piVar5 = (int *)*param_1;
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_015873e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15873e8);
      (*pcVar1)();
    }
    uVar9 = param_1[1];
    if (param_4 == 0) {
      local_54[0] = 0;
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
      if (iVar3 < 0) goto LAB_015873e8;
      piVar11 = piVar5 + 2;
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = (*(int **)(param_4 + 4))[1];
      if (uVar9 < uVar8) {
        uVar8 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar11,uVar8);
        if (iVar3 != 0) {
          uVar8 = 0;
        }
        piVar11 = (int *)((int)piVar11 + uVar8);
      }
      local_3c = FUN_016bc0ec(piVar11,uVar9 - uVar8);
      local_48 = 3;
      local_54[0] = 2;
      local_44 = piVar6;
      local_40 = uVar4;
    }
    local_34 = 0x80000001;
    local_30 = iVar10;
    local_28 = param_3;
    uVar12 = FUN_01531840(&local_34);
    uVar4 = FUN_01595634(piVar5,uVar9,local_54,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),pcVar7,2
                        );
  }
  return uVar4;
}

