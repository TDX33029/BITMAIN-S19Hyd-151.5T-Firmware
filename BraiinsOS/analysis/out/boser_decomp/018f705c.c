// FUN_018f705c @ 018f705c size=580 calls_out=5 calls_in=2
// strings: 

void FUN_018f705c(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int local_40;
  
  uVar12 = FUN_0192fb20(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar4 = (uint)uVar12;
  uVar1 = uVar4 >> 0x19;
  cVar2 = (char)*param_3;
  uVar8 = param_2[1];
  cVar3 = *(char *)((int)param_3 + 1);
  iVar11 = *(int *)((int)param_3 + 2);
  iVar9 = *param_2;
  local_40 = 0;
  do {
    uVar4 = uVar8 & uVar4;
    uVar5 = *(uint *)(iVar9 + uVar4);
    uVar6 = uVar5 ^ uVar1 * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      iVar10 = iVar9 + (uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                       uVar8) * -0x90;
      if (*(char *)(iVar10 + -0x90) == cVar2) {
        if (cVar2 == '\0') {
          iVar7 = FUN_01939520(iVar10 + -0x8c,param_3 + 1);
          if (iVar7 != 0) goto LAB_018f7228;
        }
        else if (*(char *)(iVar10 + -0x8f) == cVar3) {
          if (cVar3 == '\0') {
            if (*(int *)(iVar10 + -0x8e) == iVar11) goto LAB_018f7228;
          }
          else {
            iVar7 = thunk_FUN_01bed842((int *)(iVar10 + -0x8e),(int *)((int)param_3 + 2),0x10);
            if (iVar7 == 0) {
LAB_018f7228:
              *(undefined1 *)(param_1 + 2) = 2;
              *param_1 = iVar10;
              param_1[1] = (int)param_2;
              iVar9 = param_3[1];
              if (cVar2 != '\0') {
                return;
              }
              if (iVar9 == -0x80000000) {
                return;
              }
              FUN_0134bd64(iVar9,param_3[2]);
              return;
            }
          }
        }
      }
    }
    if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_018f72cc(param_2,param_2 + 4);
      }
      iVar9 = param_3[1];
      iVar11 = param_3[2];
      iVar10 = param_3[3];
      iVar7 = param_3[4];
      param_1[2] = *param_3;
      param_1[3] = iVar9;
      param_1[4] = iVar11;
      param_1[5] = iVar10;
      param_1[6] = iVar7;
      *(undefined8 *)param_1 = uVar12;
      param_1[7] = (int)param_2;
      return;
    }
    local_40 = local_40 + 4;
    uVar4 = uVar4 + local_40;
  } while( true );
}

