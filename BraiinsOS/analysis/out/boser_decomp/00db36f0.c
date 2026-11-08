// FUN_00db36f0 @ 00db36f0 size=384 calls_out=6 calls_in=1
// strings: 

void FUN_00db36f0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  iVar2 = *param_2;
  piVar12 = *(int **)(iVar2 + 0x14);
  if (piVar12 != *(int **)(iVar2 + 0x1c)) {
    *(int **)(iVar2 + 0x14) = piVar12 + 8;
    local_68 = *piVar12;
    iVar4 = piVar12[1];
    iVar6 = piVar12[2];
    iVar8 = piVar12[3];
    iVar5 = piVar12[4];
    iVar7 = piVar12[5];
    iVar9 = piVar12[6];
    iVar10 = piVar12[7];
    if (local_68 != -0x7fffffeb) {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      iVar2 = piVar12[2];
      iVar11 = piVar12[3];
      piVar3 = (int *)((uint)&local_68 | 4);
      *piVar3 = piVar12[1];
      piVar3[1] = iVar2;
      piVar3[2] = iVar11;
      local_78 = piVar12[4];
      iStack_74 = piVar12[5];
      iStack_70 = piVar12[6];
      iStack_6c = piVar12[7];
      FUN_01266b34(&local_38);
      iVar2 = local_34;
      if (local_38 != -0x80000000) {
        FUN_0189bc00(&local_38);
        uVar13 = FUN_0070153c();
        iVar2 = (int)((ulonglong)uVar13 >> 0x20);
        piVar12 = (int *)uVar13;
        if (piVar12 != (int *)0x0) {
          local_38 = iVar5;
          local_34 = iVar7;
          local_30 = iVar9;
          iStack_2c = iVar10;
          FUN_00db2da8(&local_68,&local_38,iVar5,iVar7,iVar4,iVar6,iVar8);
          if (local_58 != -0x7ffffff9) {
            param_1[2] = local_68;
            param_1[3] = iStack_64;
            param_1[4] = iStack_60;
            param_1[5] = iStack_5c;
            param_1[6] = local_58;
            param_1[7] = iStack_54;
            param_1[8] = local_50;
            param_1[9] = iStack_4c;
            param_1[10] = iStack_48;
            param_1[0xb] = iStack_44;
            param_1[0xc] = iStack_40;
            param_1[0xd] = iStack_3c;
            *(undefined8 *)param_1 = uVar13;
            return;
          }
          param_1[6] = (int)&DAT_80000008;
          *param_1 = local_68;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar12;
            bVar1 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar1);
          *piVar12 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0070451c(piVar12,iVar2);
            return;
          }
          return;
        }
      }
      *param_1 = iVar2;
      param_1[6] = (int)&DAT_80000008;
      FUN_00db3970(&local_78);
      return;
    }
  }
  param_1[6] = -0x7ffffff9;
  return;
}

