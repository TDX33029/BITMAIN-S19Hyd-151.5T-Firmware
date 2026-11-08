// FUN_0066839c @ 0066839c size=560 calls_out=2 calls_in=0
// strings:        

int FUN_0066839c(int *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  uint local_34;
  int local_30;
  int *local_2c;
  code *local_28;
  
  iVar4 = *param_1;
  bVar14 = *(byte *)(param_1 + 3);
  uVar12 = 0;
  iVar5 = param_1[1];
  iVar15 = 0;
  puVar6 = (undefined4 *)param_1[2];
  uVar13 = 0;
LAB_006683d8:
  do {
    if (param_3 < uVar12) {
LAB_00668490:
      bVar1 = true;
      uVar9 = param_3;
      local_34 = uVar13;
    }
    else {
      uVar9 = param_3 - uVar12;
      if (uVar9 < 8) {
        uVar7 = 0;
        if (uVar9 == 0) {
          uVar16 = 0;
        }
        else {
          do {
            if (*(char *)(param_2 + uVar12 + uVar7) == '\n') {
              uVar16 = CONCAT44(uVar7,1);
              goto LAB_0066843c;
            }
            uVar7 = uVar7 + 1;
          } while (uVar9 != uVar7);
          uVar16 = (ulonglong)uVar9 << 0x20;
        }
      }
      else {
        uVar16 = FUN_01307168(10,param_2 + uVar12);
      }
LAB_0066843c:
      if ((uVar16 & 1) == 0) {
        uVar12 = param_3;
        goto LAB_00668490;
      }
      uVar9 = uVar12 + (int)(uVar16 >> 0x20);
      uVar12 = uVar9 + 1;
      if ((param_3 <= uVar9) || (*(char *)(param_2 + uVar9) != '\n')) goto LAB_006683d8;
      bVar1 = false;
      local_34 = uVar12;
    }
    if ((bVar14 & 1) == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      if (iVar4 == 0) {
        iVar2 = (**(code **)(puVar6[1] + 0xc))(*puVar6,&DAT_0056d06c,4);
      }
      else {
        local_28 = FUN_012fd02c;
        local_2c = &local_30;
        local_30 = iVar5;
        iVar2 = FUN_012fa178(*puVar6,puVar6[1],&DAT_003d42bc,&local_2c);
      }
      if (iVar2 != 0) {
        return 1;
      }
    }
    else if (iVar15 != 0) {
      iVar2 = (**(code **)(puVar6[1] + 0x10))(*puVar6,10);
      if (iVar2 != 0) {
        return 1;
      }
      if (iVar4 == 0) {
        uVar3 = *puVar6;
        uVar10 = 4;
        pcVar11 = *(code **)(puVar6[1] + 0xc);
        pcVar8 = "    \'\x1e";
      }
      else {
        uVar3 = *puVar6;
        uVar10 = 7;
        pcVar11 = *(code **)(puVar6[1] + 0xc);
        pcVar8 = "       ";
      }
      iVar2 = (*pcVar11)(uVar3,pcVar8,uVar10);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar15 = iVar15 + 1;
    iVar2 = (**(code **)(puVar6[1] + 0xc))
                      (*puVar6,param_2 + uVar13,uVar9 - uVar13,*(code **)(puVar6[1] + 0xc),iVar5);
    bVar14 = 1;
    uVar13 = local_34;
    if (iVar2 != 0 || bVar1) {
      return iVar2;
    }
  } while( true );
}

