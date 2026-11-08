// FUN_01533a98 @ 01533a98 size=508 calls_out=3 calls_in=2
// strings: 

int FUN_01533a98(int *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint unaff_r8;
  uint uVar12;
  int local_3c;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar4 = FUN_0156d824(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  uVar1 = uVar4 >> 0x19;
  iVar10 = *param_1;
  uVar12 = param_1[1];
  cVar2 = *param_2;
  cVar3 = param_2[1];
  iVar11 = *(int *)(param_2 + 2);
  local_3c = 0;
  while( true ) {
    uVar4 = uVar12 & uVar4;
    uVar5 = *(uint *)(iVar10 + uVar4);
    uVar6 = uVar5 ^ uVar1 * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar9 = uVar6, uVar9 != 0) {
      uVar6 = uVar9 - 1 & uVar9;
      unaff_r8 = uVar4 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                        (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar12;
      pcVar7 = (char *)(iVar10 + -0x90 + unaff_r8 * -0x90);
      if (cVar2 == *pcVar7) {
        if (cVar2 == '\0') {
          iVar8 = FUN_0157531c(param_2 + 4,pcVar7 + 4);
          if (iVar8 != 0) goto LAB_01533c64;
        }
        else if (cVar3 == pcVar7[1]) {
          if (cVar3 == '\0') {
            if (iVar11 == *(int *)(pcVar7 + 2)) goto LAB_01533c64;
          }
          else {
            iVar8 = thunk_FUN_016dd50a(param_2 + 2,pcVar7 + 2,0x10);
            if (iVar8 == 0) goto LAB_01533c64;
          }
        }
      }
    }
    if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
    local_3c = local_3c + 4;
    uVar4 = uVar4 + local_3c;
  }
LAB_01533c64:
  iVar10 = iVar10 + unaff_r8 * -0x90 + -0x78;
  if (uVar9 == 0) {
    iVar10 = 0;
  }
  return iVar10;
}

