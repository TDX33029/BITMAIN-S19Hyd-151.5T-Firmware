// FUN_0198294c @ 0198294c size=604 calls_out=3 calls_in=6
// strings: 

undefined8 FUN_0198294c(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r2;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  byte *local_60;
  uint local_5c;
  char local_58;
  undefined1 auStack_57 [19];
  byte local_44;
  char local_43;
  char local_42;
  uint local_40;
  char local_3c;
  
  cVar1 = *(char *)(param_1 + 2);
  pbVar8 = (byte *)*param_1;
  uVar9 = param_1[1];
  if (cVar1 != '\x06') {
    FUN_01bed4e2(&local_40,(int)param_1 + 9,0x13);
  }
  bVar2 = *(byte *)(param_1 + 7);
  cVar3 = *(char *)((int)param_1 + 0x1d);
  cVar4 = *(char *)((int)param_1 + 0x1e);
  local_60 = pbVar8;
  local_5c = uVar9;
  local_58 = cVar1;
  FUN_01bed4e2(auStack_57,&local_40,0x13);
  local_44 = bVar2;
  local_42 = cVar4;
  if (bVar2 == 2) {
    uVar7 = extraout_r2;
    if (uVar9 != 0) {
      do {
        uVar5 = 0;
        do {
          if (pbVar8[uVar5] == 0x2f) {
            iVar6 = 1;
            if (uVar5 != 0) goto LAB_019829fc;
            goto LAB_01982a0c;
          }
          uVar5 = uVar5 + 1;
        } while (uVar9 != uVar5);
        iVar6 = 0;
        uVar5 = uVar9;
        if (uVar9 != 0) {
LAB_019829fc:
          if (uVar5 == 1) {
            uVar7 = (uint)*pbVar8;
          }
          if (uVar5 != 1 || uVar7 != 0x2e) goto LAB_01982a28;
        }
LAB_01982a0c:
        uVar5 = iVar6 + uVar5;
        if (uVar9 < uVar5) {
          local_43 = cVar3;
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar5,uVar9,uVar9,&DAT_01d27bbc);
        }
        pbVar8 = pbVar8 + uVar5;
        uVar9 = uVar9 - uVar5;
      } while (uVar9 != 0);
      uVar9 = 0;
LAB_01982a28:
      local_60 = pbVar8;
      local_5c = uVar9;
      goto LAB_01982a2c;
    }
  }
  else {
LAB_01982a2c:
    if (cVar3 != '\x02') goto LAB_01982ad8;
    if (bVar2 < 2) {
      if (cVar4 == '\0') {
        local_43 = 2;
        do {
          if (uVar9 == 0) {
LAB_01982b38:
            if (uVar9 == 0) goto LAB_01982ad8;
          }
          else if (uVar9 == 1) {
            if (*pbVar8 == 0x2e) goto LAB_01982ad8;
          }
          else {
            bVar2 = *pbVar8;
            bVar10 = bVar2 == 0x2e;
            if (bVar10) {
              bVar2 = pbVar8[1];
            }
            if (!bVar10 || bVar2 != 0x2f) goto LAB_01982b38;
            if (uVar9 < 2) goto LAB_01982ad8;
          }
          FUN_0199f7d4(&local_40,&local_60);
          if (local_3c != '\n') goto LAB_01982ad8;
          uVar7 = uVar9 - local_40;
          if (uVar9 < local_40) goto LAB_01982b80;
          uVar9 = uVar7;
          local_5c = uVar7;
        } while( true );
      }
      if (1 < uVar9) {
        local_43 = 2;
        do {
          FUN_0199f7d4(&local_40,&local_60);
          if (local_3c != '\n') break;
          uVar7 = uVar9 - local_40;
          if (uVar9 < local_40) goto LAB_01982b80;
          uVar9 = uVar7;
          local_5c = uVar7;
        } while (1 < uVar7);
      }
      goto LAB_01982ad8;
    }
    if (uVar9 != 0) {
      local_43 = 2;
      do {
        FUN_0199f7d4(&local_40,&local_60);
        if (local_3c != '\n') goto LAB_01982ad8;
        uVar7 = uVar9 - local_40;
        if (uVar9 < local_40) {
LAB_01982b80:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar7,uVar9,&DAT_01d27b8c);
        }
        uVar9 = uVar7;
        local_5c = uVar7;
      } while (uVar7 != 0);
    }
  }
  uVar9 = 0;
LAB_01982ad8:
  return CONCAT44(uVar9,pbVar8);
}

