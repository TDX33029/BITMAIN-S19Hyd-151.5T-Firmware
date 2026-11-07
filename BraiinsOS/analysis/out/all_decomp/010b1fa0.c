// FUN_010b1fa0 @ 010b1fa0 size=540 calls_out=5 calls_in=1
// strings: 

void FUN_010b1fa0(int *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  uVar8 = *(uint *)(param_2 + 0x28);
  if (uVar8 == 0) {
LAB_010b2134:
    *(undefined1 *)(param_1 + 4) = 2;
    return;
  }
  uVar3 = FUN_010b0a24(param_2,param_3);
  uVar1 = *(ushort *)(param_2 + 0x38);
  iVar13 = *(int *)(param_2 + 0x24);
  uVar12 = 0;
  iVar10 = *(int *)(param_2 + 0x18);
  uVar11 = *(uint *)(param_2 + 0x1c);
  uVar9 = (uint)uVar1 & uVar3 & 0xffff;
  do {
    do {
      uVar4 = uVar9;
      uVar9 = 0;
    } while (uVar11 <= uVar4);
    puVar5 = (ushort *)(iVar10 + uVar4 * 4);
    uVar9 = (uint)*puVar5;
    if ((uVar9 == 0xffff) || (uVar2 = puVar5[1], (uVar4 - (uVar2 & uVar1) & (uint)uVar1) < uVar12))
    goto LAB_010b2134;
    if ((uint)uVar2 == (uVar3 & 0xffff)) {
      if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,uVar8,&DAT_018a6bf0);
      }
      iVar6 = uVar9 * 0x34 + iVar13;
      if ((*(int *)(iVar6 + 0x20) != 0) != (*param_3 == 0)) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          if (*(char *)(iVar6 + 0x24) == (char)param_3[1]) {
LAB_010b20c0:
            piVar7 = (int *)(iVar13 + uVar9 * 0x34);
            if (*piVar7 == 1) {
              iVar10 = piVar7[1];
              while (FUN_010b1bc4(auStack_58,iVar13,uVar8,param_2 + 0x2c,iVar10), iVar10 = local_4c,
                    local_50 == 1) {
                (**(code **)(local_48 + 0x10))(&iStack_3c,iStack_44,iStack_40);
                iVar13 = *(int *)(param_2 + 0x24);
                uVar8 = *(uint *)(param_2 + 0x28);
              }
              (**(code **)(local_48 + 0x10))(&iStack_3c,iStack_44,iStack_40);
            }
            FUN_014428b8(auStack_58,param_2,uVar4,uVar9);
            *param_1 = local_4c;
            param_1[1] = local_48;
            param_1[2] = iStack_44;
            param_1[3] = iStack_40;
            param_1[4] = iStack_3c;
            if (local_38 == 0) {
              return;
            }
            (**(code **)(local_38 + 0x10))(auStack_2c,local_34,local_30);
            return;
          }
        }
        else if ((*(int *)(iVar6 + 0x28) == param_3[2]) &&
                (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 0x24),param_3[1]), iVar6 == 0))
        goto LAB_010b20c0;
      }
    }
    uVar12 = uVar12 + 1;
    uVar9 = uVar4 + 1;
  } while( true );
}

