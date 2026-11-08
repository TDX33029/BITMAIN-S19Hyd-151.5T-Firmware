// FUN_0077a800 @ 0077a800 size=432 calls_out=8 calls_in=0
// strings: 

void FUN_0077a800(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x17)) {
  case 0:
    iVar7 = param_2[8];
    puVar3 = param_2 + 0xb;
    *puVar3 = *param_2;
    param_2[0xc] = param_2[1];
    param_2[0xd] = param_2[2];
    param_2[0xe] = param_2[3];
    param_2[0xf] = param_2[4];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    uVar9 = param_2[9];
    uVar6 = param_2[10];
    param_2[0x13] = iVar7;
    param_2[0x14] = uVar9;
    param_2[0x15] = uVar6;
    param_2[0x16] = puVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c08a64);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c08a64);
  case 3:
    iVar7 = param_2[0x13];
    uVar9 = param_2[0x14];
    uVar6 = param_2[0x15];
    puVar3 = (undefined4 *)param_2[0x16];
  }
  local_60 = *puVar3;
  uStack_5c = puVar3[1];
  uStack_58 = puVar3[2];
  uStack_54 = puVar3[3];
  local_50 = puVar3[4];
  uStack_4c = puVar3[5];
  uStack_48 = puVar3[6];
  uStack_44 = puVar3[7];
  iVar5 = *(int *)(iVar7 + 8);
  do {
    FUN_019e7220(&local_40,iVar5,param_3,1);
    if (local_40 == 2) {
      uVar8 = 5;
      uVar4 = 2;
      local_38 = extraout_r1;
LAB_0077a960:
      if (uVar8 == 5) {
        *(undefined1 *)param_1 = 5;
        uVar2 = 3;
      }
      else {
        *param_1 = uVar8 | uVar4 << 8;
        param_1[1] = local_38;
        uVar2 = 1;
      }
      *(undefined1 *)(param_2 + 0x17) = uVar2;
      return;
    }
    if ((local_40 & 1) != 0) {
LAB_0077a954:
      uVar4 = local_3c >> 8;
      uVar8 = local_3c & 0xff;
      goto LAB_0077a960;
    }
    local_2c = local_38;
    local_30 = local_3c;
    if (*(int *)(iVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    uVar4 = FUN_01609da8(&local_40,*(int *)(iVar7 + 0xc),uVar9,uVar6,&local_60);
    uVar8 = local_40 & 0xff;
    if (uVar8 == 4) {
      uVar8 = 4;
      local_38 = local_3c;
      goto LAB_0077a960;
    }
    cVar1 = FUN_005ef5e8(&local_40);
    if (cVar1 != '\r') {
      local_38 = local_3c;
      local_3c = local_40;
      goto LAB_0077a954;
    }
    FUN_019e0788(iVar5 + 0x20,&local_30);
    FUN_0069263c(uVar8,local_3c);
  } while( true );
}

