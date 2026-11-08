// FUN_015db2f0 @ 015db2f0 size=336 calls_out=2 calls_in=2
// strings: 

void FUN_015db2f0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_34;
  
  uVar7 = FUN_015f7180(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar5 = (uint)uVar7;
  uVar1 = uVar5 >> 0x19;
  iVar2 = *param_2;
  local_34 = 0;
  do {
    uVar5 = param_2[1] & uVar5;
    uVar6 = *(uint *)(iVar2 + uVar5);
    uVar3 = uVar6 ^ uVar1 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar4 = uVar5 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & param_2[1]
      ;
      uVar3 = uVar3 - 1 & uVar3;
      if (*(int *)(iVar2 + -0xb8 + uVar4 * -0xb8) == param_3) {
        *param_1 = uVar4 * -0xb8 + iVar2;
        param_1[1] = (int)param_2;
        param_2 = (int *)0x0;
        goto LAB_015db404;
      }
    }
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) {
      if (param_2[2] == 0) {
        FUN_015d8b04(param_2,param_2 + 4);
      }
      *(undefined8 *)param_1 = uVar7;
      param_1[2] = param_3;
LAB_015db404:
      param_1[3] = (int)param_2;
      return;
    }
    local_34 = local_34 + 4;
    uVar5 = uVar5 + local_34;
  } while( true );
}

