// FUN_015db1ac @ 015db1ac size=324 calls_out=2 calls_in=2
// strings: 

void FUN_015db1ac(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_34;
  
  uVar10 = FUN_015f7180(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar7 = (uint)uVar10;
  uVar1 = uVar7 >> 0x19;
  iVar5 = *param_2;
  local_34 = 0;
  do {
    uVar7 = param_2[1] & uVar7;
    uVar8 = *(uint *)(iVar5 + uVar7);
    uVar6 = uVar8 ^ uVar1 * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      uVar9 = uVar6 >> 8;
      uVar2 = uVar6 >> 0x10;
      uVar3 = uVar6 >> 0x18;
      uVar4 = uVar6 << 0x18;
      uVar6 = uVar6 - 1 & uVar6;
      uVar9 = uVar7 + ((uint)LZCOUNT(uVar4 | (uVar9 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                      >> 3) & param_2[1];
      if (*(int *)(iVar5 + -0x40 + uVar9 * -0x40) == param_3) {
        *param_1 = iVar5 + uVar9 * -0x40;
        param_1[1] = (int)param_2;
        param_2 = (int *)0x0;
        goto LAB_015db2b4;
      }
    }
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_015d9b1c(param_2,param_2 + 4);
      }
      *(undefined8 *)param_1 = uVar10;
      param_1[2] = param_3;
LAB_015db2b4:
      param_1[3] = (int)param_2;
      return;
    }
    local_34 = local_34 + 4;
    uVar7 = uVar7 + local_34;
  } while( true );
}

