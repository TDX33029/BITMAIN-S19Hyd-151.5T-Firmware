// FUN_013f12a4 @ 013f12a4 size=888 calls_out=14 calls_in=2
// strings: 

void FUN_013f12a4(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6,
                 int param_7,int param_8)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  int *local_60;
  undefined2 *local_5c;
  uint *local_58;
  code *local_54;
  int *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44;
  int local_40;
  int local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_25;
  
  uVar10 = *(uint *)(param_1 + 0x74) & 0x3f;
  uVar11 = param_3 >> uVar10 | param_4 << (0x20 - uVar10 & 0xff);
  if (-1 < (int)(uVar10 - 0x20)) {
    uVar11 = param_4 >> (uVar10 - 0x20 & 0xff);
  }
  uVar10 = 0;
  if (*(uint *)(param_1 + 0x74) != 0x40) {
    uVar10 = uVar11;
  }
  if (*(uint *)(param_1 + 0x5c) <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar10,*(uint *)(param_1 + 0x5c),&DAT_01cf3dd8);
  }
  iVar12 = *(int *)(param_1 + 0x58);
  uVar11 = FUN_013f0d78();
  local_2c = uVar11;
  piVar7 = (int *)FUN_0140b1c4();
  sVar2 = *(short *)(param_2 + 0x46);
  sVar3 = *(short *)(param_2 + 0x48);
  uVar4 = *(ushort *)(param_2 + 0x44);
  sVar5 = *(short *)(param_2 + 0x4a);
  piVar15 = piVar7;
  do {
    iVar9 = piVar15[1];
    uVar8 = iVar9 - 1U & param_3;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar8,0,&DAT_01cf3570);
    }
    local_60 = (int *)*piVar15;
    local_44 = 1;
    local_50 = local_60 + uVar8;
    local_48 = 0;
    local_5c = (undefined2 *)iVar9;
    local_58 = &local_2c;
    local_54 = (code *)uVar8;
    local_4c = uVar8;
LAB_013f1394:
    FUN_013f4d28(&local_40,&local_60);
    uVar8 = local_34;
    if (local_40 != 1) {
LAB_013f1470:
      puVar14 = (uint *)0x0;
      goto LAB_013f1478;
    }
    if (local_3c != 0) {
      piVar16 = (int *)(local_34 & 0xfffffff8);
      if (piVar16 == (int *)0x0) goto LAB_013f1470;
      iVar13 = *piVar16;
      iVar9 = FUN_013cad2c(iVar13 + 8,param_2);
      if ((((iVar9 != 0) && (*(short *)(iVar13 + 0x50) == sVar3)) &&
          ((sVar3 != 0x24 || (*(short *)(iVar13 + 0x52) == sVar5)))) &&
         (((uint)*(ushort *)(iVar13 + 0x4c) == (uint)uVar4 &&
          ((1 < uVar4 - 5 || (*(short *)(iVar13 + 0x4e) == sVar2)))))) {
        puVar14 = (uint *)0x0;
        if ((uVar8 & 2) == 0) {
          puVar14 = (uint *)piVar16[1];
          do {
            uVar8 = *puVar14;
            bVar6 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar6);
          *puVar14 = uVar8 + 1;
          if (0x7fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0197a954();
          }
        }
LAB_013f1478:
        FUN_0140b280(iVar12 + uVar10 * 8,uVar11,piVar7,piVar15);
        FUN_013f0f2c(uVar11);
        if (puVar14 == (uint *)0x0) {
          if (*(int *)(param_7 + 0xc) != 0) {
            FUN_013fc740();
          }
        }
        else {
          local_3c = param_6;
          local_40 = param_5;
          uVar11 = FUN_01401994(puVar14[0x21]);
          if (uVar11 != 0) {
            local_2c = uVar11 & 0xfffffffc;
            local_25 = *(byte *)(param_7 + 0x14);
            local_30 = uVar11 & 3;
            if (local_30 != local_25) {
              local_58 = &local_2c;
              local_54 = FUN_013fc36c;
              local_5c = &DAT_0132b6a0;
              local_60 = &local_40;
              FUN_01409744(&local_25,&local_30,&DAT_005abfe6,&local_60,&DAT_01cf3a78);
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x13f1608);
              (*pcVar1)();
            }
            if ((*(int *)(local_2c + 8) != 0) || (*(uint *)(param_7 + 0xc) == local_2c)) {
              FUN_013fc740(param_7);
            }
          }
          DataMemoryBarrier(0xb);
          if (((*(short *)(puVar14[0x20] + 0x34) != *(short *)(puVar14[0x20] + 0x36)) &&
              (iVar12 = FUN_01401904(puVar14[0x21]), iVar12 != 0)) &&
             ((*(int *)(iVar12 + 8) != 0 || (*(int *)(param_8 + 0xc) == iVar12)))) {
            FUN_013fc740(param_8);
          }
          FUN_01406bcc(puVar14);
        }
        return;
      }
      goto LAB_013f1394;
    }
    piVar16 = (int *)FUN_013f57f0(piVar15,&local_2c,*(undefined4 *)(param_1 + 0x60),
                                  *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                                  *(undefined4 *)(param_1 + 0x6c),0);
    if (piVar16 != (int *)0x0) {
      piVar15 = piVar16;
    }
  } while( true );
}

