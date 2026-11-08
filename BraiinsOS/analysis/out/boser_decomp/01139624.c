// FUN_01139624 @ 01139624 size=784 calls_out=12 calls_in=2
// strings: 

void FUN_01139624(undefined1 *param_1,int *param_2,undefined4 *param_3,char param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  char local_245;
  int local_244;
  int iStack_240;
  int iStack_23c;
  undefined1 auStack_238 [72];
  char *local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined2 uStack_1db;
  undefined1 uStack_1d9;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_130 [20];
  undefined4 local_11c;
  undefined4 local_10c;
  undefined4 local_fc;
  undefined4 local_ec;
  undefined2 local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  byte local_2c;
  
  iVar12 = param_3[0x10];
  local_245 = param_4;
  if (iVar12 != 0) {
    FUN_01a6915c(iVar12);
  }
  FUN_01933ff0(&local_d8,*param_2 + 8);
  iVar4 = local_d4;
  if (local_d8 == 1) {
    local_1dc = (undefined1)local_d0;
    local_1e0 = local_d4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_1e0,&DAT_01c1810c,&DAT_01c17fa4);
  }
  piVar15 = (int *)param_2[3];
  local_244 = local_d4 + 0x158;
  iVar16 = param_2[1];
  iVar17 = param_2[2];
  uVar13 = local_d0 & 0xff;
  iStack_240 = iVar16;
  iStack_23c = iVar17;
  FUN_01656cb0(&local_d8,piVar15 + 2);
  iVar5 = local_d4;
  if (local_d8 == 1) {
    local_1dc = (undefined1)local_d0;
    local_1e0 = local_d4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_1e0,&DAT_01c180fc,&DAT_01c17fb4);
  }
  uVar8 = local_d0 & 0xff;
  FUN_01bed4e2(auStack_238,param_3,0x48);
  iVar14 = iVar5 + 8;
  local_1f0 = &local_245;
  local_1ec = iVar4 + 0xe8;
  local_1e8 = iVar4 + 0xe0;
  local_1e4 = iVar14;
  iVar9 = FUN_01367c40(*(undefined4 *)(iVar4 + 0x18c),*(undefined4 *)(iVar4 + 400),iVar16,iVar17);
  puVar10 = *(undefined1 **)(iVar9 + 0x18);
  iVar16 = FUN_01367c40(*(undefined4 *)(iVar4 + 0x18c),*(undefined4 *)(iVar4 + 400),iVar16,iVar17);
  cVar6 = local_245;
  uVar18 = *(undefined4 *)(iVar16 + 0xd4);
  uVar2 = *(undefined2 *)(param_3 + 0x11);
  FUN_0178e884(iVar12);
  local_ec = 0;
  local_fc = 0;
  local_10c = 0;
  local_11c = 0;
  local_130[0] = 0xb;
  local_1e0 = *param_3;
  uVar11 = param_3[1];
  uStack_1d8 = param_3[2];
  uStack_1d4 = param_3[3];
  uStack_1d0 = param_3[4];
  local_1dc = (undefined1)uVar11;
  uStack_1db = (undefined2)((uint)uVar11 >> 8);
  uStack_1d9 = (undefined1)((uint)uVar11 >> 0x18);
  local_1cc = param_3[5];
  uStack_1c8 = param_3[6];
  uStack_1c4 = param_3[7];
  uStack_1c0 = param_3[8];
  uStack_1bc = param_3[9];
  local_1b8 = param_3[10];
  uStack_1b4 = param_3[0xb];
  uStack_1b0 = param_3[0xc];
  uStack_1ac = param_3[0xd];
  uStack_1a8 = param_3[0xe];
  uStack_1a4 = param_3[0xf];
  local_dc = uVar2;
  FUN_01375c08(&local_d8,uVar18,local_130);
  if (cVar6 != '\0') {
    local_2c = local_2c | 1;
  }
  FUN_01bed4e2(&local_1e0,&local_d8,0xb0);
  cVar6 = FUN_01a85dac(iVar4 + 0xe8,&local_1e0,iVar14,&local_244,iVar4 + 8,iVar4 + 0xe0);
  FUN_01387ff4(iVar4 + 8,&local_244,puVar10 != &DAT_3b9aca00);
  FUN_011967dc(iVar5,uVar8);
  FUN_011967dc(iVar4,uVar13);
  if (cVar6 == '\f') {
    FUN_01383dd8(&local_d8,param_2);
    do {
      iVar12 = *piVar15;
      bVar3 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar3);
    *piVar15 = iVar12 + 1;
    if (iVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1139934);
      (*pcVar1)();
    }
    local_1e0._0_3_ = (undefined3)((uint)local_d4 >> 8);
    local_1e0._3_1_ = (undefined1)local_d0;
    cVar6 = (char)local_d4;
    if (local_d8 != 0) {
      *(int *)(param_1 + 4) = local_d8;
      uVar7 = 5;
      *(int *)(param_1 + 9) = local_1e0;
      param_1[8] = (char)local_d4;
      *(uint *)(param_1 + 0xc) = local_d0;
      *(int **)(param_1 + 0x10) = piVar15;
      goto LAB_011398ac;
    }
  }
  uVar7 = 3;
  param_1[1] = cVar6;
LAB_011398ac:
  *param_1 = uVar7;
  return;
}

