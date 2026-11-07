// FUN_015a01d8 @ 015a01d8 size=396 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_015a01d8(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar4 = 0;
  if (*param_2 == '\x03') {
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    if ((*(int *)(param_2 + 0xc) != 0x24) ||
       (iVar3 = (*DAT_01d50fd4)(*(undefined4 *)(param_2 + 8),&local_48), iVar3 != 0)) {
      piVar5 = (int *)*param_1;
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_015a0360:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15a0360);
        (*pcVar1)();
      }
      uVar8 = param_1[1];
      if (param_4 == 0) {
        local_48 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar7 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_015a0360;
        piVar9 = piVar5 + 2;
        uVar4 = *(undefined4 *)(param_4 + 0x10);
        uVar6 = (*(int **)(param_4 + 4))[1];
        if (uVar8 < uVar6) {
          uVar6 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar6);
          if (iVar3 != 0) {
            uVar6 = 0;
          }
          piVar9 = (int *)((int)piVar9 + uVar6);
        }
        local_30 = FUN_016bc0ec(piVar9,uVar8 - uVar6);
        local_3c = 3;
        local_48 = 2;
        local_38 = piVar7;
        local_34 = uVar4;
      }
      uVar10 = FUN_01531840(param_3);
      uVar4 = FUN_01595ecc(piVar5,uVar8,&local_48,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
                           param_2,&DAT_0056d618,4);
    }
  }
  return uVar4;
}

