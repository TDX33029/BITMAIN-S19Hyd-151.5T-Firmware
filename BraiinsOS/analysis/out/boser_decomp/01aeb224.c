// FUN_01aeb224 @ 01aeb224 size=476 calls_out=4 calls_in=1
// strings: 

uint FUN_01aeb224(char *param_1,int param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  char *local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  char *local_28;
  uint local_24;
  
  local_38 = param_1;
  local_34 = param_2;
  if (*param_3 == 1) {
    iVar4 = 0xc;
    uVar8 = 0x10;
    if (param_3[1] == 0) {
      iVar4 = 0x10;
      uVar8 = 4;
    }
    if (param_1 != (char *)0x0) {
      local_30 = 0;
      if (param_2 == 0) {
        return 4;
      }
      while( true ) {
        FUN_01ae6550(&local_2c,&local_38);
        uVar5 = local_2c & 0xff;
        if (uVar5 == 4) break;
        uVar3 = uVar5;
        if (uVar5 == 2) {
          uVar3 = local_24;
        }
        if (uVar5 == 2 && uVar3 == uVar8) {
          pcVar6 = local_28;
          uVar5 = uVar8;
          pcVar7 = (char *)((int)param_3 + iVar4);
          do {
            if (uVar5 == 0) {
              return 0x26;
            }
            cVar1 = *pcVar6;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 == cVar2);
        }
        if (local_30 == local_34) {
          return 4;
        }
      }
LAB_01aeb3b0:
      return local_2c >> 8 & 0xff;
    }
  }
  else {
    FUN_012fbd94(&local_2c,param_3[1],param_3[2]);
    uVar8 = local_24;
    pcVar6 = local_28;
    if (local_2c == 1) {
      local_38 = local_28;
      local_34 = local_24;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d30180,&DAT_01d301b0);
    }
    if (param_1 != (char *)0x0) {
      local_30 = 0;
      while (local_30 != local_34) {
        FUN_01ae6550(&local_2c,&local_38);
        if ((local_2c & 0xff) == 4) goto LAB_01aeb3b0;
        uVar5 = 0x27;
        if ((local_2c & 0xff) == 0) {
          uVar9 = FUN_01ae7098(local_28,local_24,0,pcVar6,uVar8);
          uVar5 = (uint)(uVar9 >> 0x20);
          if ((uVar9 & 1) == 0) {
            uVar5 = uVar5 ^ 0x27;
          }
          else if ((uVar5 & 0xff) == 0x10) {
            uVar5 = 0x27;
          }
        }
        if ((uVar5 & 0xff) != 0x27) {
          return uVar5;
        }
      }
    }
  }
  return 4;
}

