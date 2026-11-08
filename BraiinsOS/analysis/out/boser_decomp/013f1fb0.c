// FUN_013f1fb0 @ 013f1fb0 size=664 calls_out=13 calls_in=1
// strings: 

void FUN_013f1fb0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  int local_30;
  uint local_28;
  
  uVar9 = *(uint *)(param_1 + 0x74) & 0x3f;
  uVar11 = param_3 >> uVar9 | param_4 << (0x20 - uVar9 & 0xff);
  if (-1 < (int)(uVar9 - 0x20)) {
    uVar11 = param_4 >> (uVar9 - 0x20 & 0xff);
  }
  uVar9 = 0;
  if (*(uint *)(param_1 + 0x74) != 0x40) {
    uVar9 = uVar11;
  }
  if (*(uint *)(param_1 + 0x5c) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,*(uint *)(param_1 + 0x5c),&DAT_01cf3dd8);
  }
  iVar12 = *(int *)(param_1 + 0x58);
  uVar6 = FUN_013f0d78();
  local_58 = uVar6;
  piVar7 = (int *)FUN_0140b1c4();
  sVar1 = *(short *)(param_2 + 0x46);
  sVar2 = *(short *)(param_2 + 0x48);
  uVar3 = *(ushort *)(param_2 + 0x44);
  sVar4 = *(short *)(param_2 + 0x4a);
  piVar13 = piVar7;
  do {
    iVar8 = piVar13[1];
    uVar11 = iVar8 - 1U & param_3;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar11,0,&DAT_01cf3570);
    }
    local_54 = *piVar13;
    local_38 = 1;
    local_44 = local_54 + uVar11 * 4;
    local_3c = 0;
    local_50 = iVar8;
    local_4c = &local_58;
    local_48 = uVar11;
    local_40 = uVar11;
LAB_013f20a4:
    FUN_013f4d28(&local_34,&local_54);
    uVar11 = local_28;
    if (local_34 != 1) {
LAB_013f2184:
      puVar10 = (uint *)0x0;
      goto LAB_013f2188;
    }
    if (local_30 != 0) {
      piVar14 = (int *)(local_28 & 0xfffffff8);
      if (piVar14 == (int *)0x0) goto LAB_013f2184;
      iVar15 = *piVar14;
      iVar8 = FUN_013cad2c(iVar15 + 8,param_2);
      if (((((iVar8 != 0) && (*(short *)(iVar15 + 0x50) == sVar2)) &&
           ((sVar2 != 0x24 || (*(short *)(iVar15 + 0x52) == sVar4)))) &&
          ((uint)*(ushort *)(iVar15 + 0x4c) == (uint)uVar3)) &&
         ((1 < uVar3 - 5 || (*(short *)(iVar15 + 0x4e) == sVar1)))) {
        puVar10 = (uint *)0x0;
        if ((uVar11 & 2) == 0) {
          puVar10 = (uint *)piVar14[1];
          do {
            uVar11 = *puVar10;
            bVar5 = (bool)hasExclusiveAccess(puVar10);
          } while (!bVar5);
          *puVar10 = uVar11 + 1;
          if (0x7fffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_0197a954();
          }
        }
LAB_013f2188:
        FUN_0140b280(iVar12 + uVar9 * 8,uVar6,piVar7,piVar13);
        FUN_013f0f2c(uVar6);
        if (puVar10 == (uint *)0x0) {
          if (*(int *)(param_5 + 0x54) != 0) {
            FUN_013fc740(param_5 + 0x48);
          }
        }
        else {
          FUN_0140701c(param_5,puVar10[0x21]);
          FUN_014070dc(param_5,puVar10[0x21]);
          FUN_01406bcc(puVar10);
        }
        return;
      }
      goto LAB_013f20a4;
    }
    piVar14 = (int *)FUN_013f57f0(piVar13,&local_58,*(undefined4 *)(param_1 + 0x60),
                                  *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                                  *(undefined4 *)(param_1 + 0x6c),0);
    if (piVar14 != (int *)0x0) {
      piVar13 = piVar14;
    }
  } while( true );
}

