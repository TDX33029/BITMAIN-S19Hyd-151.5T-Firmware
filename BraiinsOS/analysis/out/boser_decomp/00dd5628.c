// FUN_00dd5628 @ 00dd5628 size=392 calls_out=4 calls_in=0
// strings: 

void FUN_00dd5628(undefined4 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_1c8;
  undefined *local_1c4;
  int *local_fc;
  undefined4 local_f8;
  uint local_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 local_d4;
  undefined1 local_cf;
  undefined1 local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = param_2[4];
  if (*(int *)(iVar2 + 0x10) != 0) {
    iVar9 = *(int *)(iVar2 + 0x10) * 0x5c;
    iVar3 = *param_2;
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    iVar1 = param_2[8];
    piVar11 = (int *)(*(int *)(iVar2 + 0xc) + 0x10);
    do {
      if (-1 < *piVar11) {
        if (iVar3 != 0) {
          local_30 = param_2[1];
          iStack_2c = param_2[2];
          iStack_28 = param_2[3];
        }
        local_f4 = (uint)(iVar3 != 0);
        local_fc = piVar11 + -2;
        local_f0 = local_30;
        iStack_ec = iStack_2c;
        iStack_e8 = iStack_28;
        local_38 = 0;
        local_cf = 0;
        local_f8 = param_3;
        local_e4 = iVar2;
        local_e0 = iVar4;
        local_dc = iVar5;
        local_d8 = iVar6;
        local_d4 = (char)iVar1;
        iVar7 = thunk_FUN_01be5118(0x198);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x198);
        }
        FUN_01bed4e2(iVar7,&local_1c8,0x198);
        iVar10 = param_4[2];
        local_1c4 = &DAT_01c163e0;
        local_1c8 = iVar7;
        if (iVar10 == *param_4) {
          FUN_00f9d5fc(param_4);
        }
        param_4[2] = iVar10 + 1;
        piVar8 = (int *)(param_4[1] + iVar10 * 8);
        *piVar8 = iVar7;
        piVar8[1] = (int)&DAT_01c163e0;
      }
      piVar11 = piVar11 + 0x17;
      iVar9 = iVar9 + -0x5c;
    } while (iVar9 != 0);
  }
  *param_1 = 2;
  return;
}

