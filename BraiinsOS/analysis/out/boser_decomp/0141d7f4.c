// FUN_0141d7f4 @ 0141d7f4 size=444 calls_out=5 calls_in=4
// strings: 

void FUN_0141d7f4(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  uVar7 = *(uint *)(param_2 + 0x28);
  if (uVar7 == 0) {
LAB_0141d920:
    *(undefined1 *)(param_1 + 4) = 2;
    return;
  }
  uVar3 = FUN_0137e53c(param_2,param_3);
  uVar1 = *(ushort *)(param_2 + 0x38);
  uVar11 = 0;
  iVar10 = *(int *)(param_2 + 0x18);
  uVar8 = *(uint *)(param_2 + 0x1c);
  iVar12 = *(int *)(param_2 + 0x24);
  uVar9 = (uint)uVar1 & uVar3 & 0xffff;
  do {
    do {
      uVar4 = uVar9;
      uVar9 = 0;
    } while (uVar8 <= uVar4);
    puVar5 = (ushort *)(iVar10 + uVar4 * 4);
    uVar9 = (uint)*puVar5;
    if ((uVar9 == 0xffff) || (uVar2 = puVar5[1], (uVar4 - (uVar2 & uVar1) & (uint)uVar1) < uVar11))
    goto LAB_0141d920;
    if ((uint)uVar2 == (uVar3 & 0xffff)) {
      if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,uVar7,&DAT_01d2f55c);
      }
      iVar6 = uVar9 * 0x34 + iVar12;
      if ((*(int *)(iVar6 + 0x20) != 0) != (*param_3 == 0)) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          if (*(char *)(iVar6 + 0x24) == (char)param_3[1]) goto LAB_0141d934;
        }
        else if ((*(int *)(iVar6 + 0x28) == param_3[2]) &&
                (iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x24),param_3[1]), iVar6 == 0))
        {
LAB_0141d934:
          piVar13 = (int *)(iVar12 + uVar9 * 0x34);
          if (*piVar13 != 0) {
            FUN_0141ce48(param_2,piVar13[1]);
          }
          FUN_0141d9b4(auStack_58,param_2,uVar4,uVar9);
          *param_1 = local_4c;
          param_1[1] = uStack_48;
          param_1[2] = uStack_44;
          param_1[3] = uStack_40;
          param_1[4] = uStack_3c;
          if (local_38 == 0) {
            return;
          }
          (**(code **)(local_38 + 0x10))(auStack_2c,local_34,local_30);
          return;
        }
      }
    }
    uVar11 = uVar11 + 1;
    uVar9 = uVar4 + 1;
  } while( true );
}

