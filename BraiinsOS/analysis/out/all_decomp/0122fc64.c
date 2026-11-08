// FUN_0122fc64 @ 0122fc64 size=424 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0122fc64(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar6 = 0;
  if (*param_2 == '\x03') {
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    if ((*(int *)(param_2 + 0xc) != 0x24) ||
       (iVar3 = (*DAT_018d910c)(*(undefined4 *)(param_2 + 8),&local_48), iVar3 != 0)) {
      piVar7 = (int *)*param_1;
      do {
        iVar3 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0122fe08:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x122fe08);
        (*pcVar1)();
      }
      uVar9 = param_1[1];
      if (param_4 == 0) {
        local_48 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0122fe08;
        uVar10 = *(undefined4 *)(param_4 + 0xc);
        uVar5 = 0;
        uVar6 = *(undefined4 *)(param_4 + 0x10);
        uVar8 = (*(int **)(param_4 + 4))[1];
        if (uVar8 <= uVar9) {
          iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
          uVar5 = uVar8;
          if (iVar3 != 0) {
            uVar5 = 0;
          }
        }
        local_30 = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar9 - uVar5);
        local_3c = 3;
        local_48 = 2;
        local_38 = uVar10;
        local_34 = uVar6;
      }
      uVar11 = FUN_01238114(param_3);
      uVar6 = FUN_011f18dc(piVar7,uVar9,&local_48,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),
                           param_2,&DAT_00567824,4);
    }
  }
  return uVar6;
}

