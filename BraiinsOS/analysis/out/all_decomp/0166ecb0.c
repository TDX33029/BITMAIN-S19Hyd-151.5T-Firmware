// FUN_0166ecb0 @ 0166ecb0 size=524 calls_out=1 calls_in=2
// strings: 

void FUN_0166ecb0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar7 = *(byte **)(param_2 + 8);
  uVar9 = *(uint *)(param_2 + 0xc);
  do {
    uVar8 = uVar9;
    pbVar6 = pbVar7;
    uVar3 = 0;
    if (uVar8 != 0) {
      do {
        if (pbVar6[uVar3] != 0x20 && pbVar6[uVar3] != 9) goto LAB_0166ecfc;
        uVar3 = uVar3 + 1;
      } while (uVar8 != uVar3);
      uVar3 = uVar8;
    }
LAB_0166ecfc:
    pbVar7 = pbVar6 + uVar3;
    uVar3 = uVar8 - uVar3;
    if (uVar3 == 0) {
      uVar3 = 0;
      goto LAB_0166ee20;
    }
    uVar9 = uVar3 - 1;
    pbVar4 = pbVar7 + 1;
    bVar1 = *pbVar7;
    if (bVar1 != 10) {
      if (bVar1 == 0xd) {
        if (uVar9 == 0) {
          uVar9 = 0;
LAB_0166ee7c:
          *param_1 = 1;
          param_1[1] = 0;
          *(byte **)(param_2 + 8) = pbVar4;
          *(uint *)(param_2 + 0xc) = uVar9;
          param_1[2] = 4;
          param_1[3] = 0;
          param_1[4] = 0;
          return;
        }
        if (pbVar7[1] != 10) goto LAB_0166ee7c;
        uVar9 = uVar3 - 2;
        pbVar4 = pbVar7 + 2;
      }
      else {
        if (bVar1 != 0x23) goto LAB_0166ee20;
        uVar3 = 0;
        if (uVar9 == 0) {
          uVar9 = 0;
LAB_0166ee40:
          pbVar4 = pbVar4 + uVar9;
          goto LAB_0166ee44;
        }
        uVar5 = 0;
        while( true ) {
          pbVar7 = pbVar4 + uVar5;
          bVar1 = *pbVar7;
          if (((bVar1 != 9) && (0x5e < bVar1 - 0x20)) && (-1 < (char)bVar1)) break;
          uVar5 = uVar5 + 1;
          if (uVar9 == uVar5) goto LAB_0166ee40;
        }
        uVar3 = 0;
        pbVar4 = pbVar7;
        if (uVar9 == uVar5) goto LAB_0166ee44;
        pbVar4 = pbVar7 + 1;
        uVar9 = uVar9 + ~uVar5;
        if (*pbVar7 != 10) {
          if (*pbVar7 == 0xd) {
            if (uVar9 == 0) goto LAB_0166ee44;
            if (pbVar7[1] == 10) {
              uVar9 = uVar9 - 1;
              pbVar4 = pbVar7 + 2;
              goto joined_r0x0166edc0;
            }
          }
          uVar3 = uVar9;
LAB_0166ee44:
          param_1[3] = 0;
          param_1[4] = 0;
          *(byte **)(param_2 + 8) = pbVar4;
          *(uint *)(param_2 + 0xc) = uVar3;
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = 4;
          param_1[5] = 0;
          return;
        }
      }
    }
joined_r0x0166edc0:
    pbVar7 = pbVar4;
    if (uVar8 == uVar9) {
      iVar2 = thunk_FUN_016dd50a(pbVar6,pbVar7,uVar8);
      uVar3 = uVar8;
      if (iVar2 == 0) {
LAB_0166ee20:
        *(byte **)(param_2 + 8) = pbVar7;
        *(uint *)(param_2 + 0xc) = uVar3;
        *param_1 = 3;
        return;
      }
    }
  } while( true );
}

