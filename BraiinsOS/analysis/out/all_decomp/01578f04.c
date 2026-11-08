// FUN_01578f04 @ 01578f04 size=696 calls_out=2 calls_in=5
// strings: 

void FUN_01578f04(uint *param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  uint local_28;
  uint local_24;
  
  uVar3 = *param_2;
  if (uVar3 == 0x80000015) goto switchD_01578f4c_default;
  uVar2 = 0x15;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar3 = param_2[2];
    uVar2 = param_2[3];
    if (param_4 == 0) goto switchD_01578f4c_default;
    goto LAB_0157901c;
  case 0xd:
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    break;
  case 0xe:
    FUN_00fab1e0(&local_2c,param_2[2],param_2[3]);
    uVar3 = local_28;
    uVar2 = local_24;
    if (local_2c != 0) {
LAB_01578fa4:
      *param_1 = 0x80000015;
      return;
    }
    break;
  case 0xf:
    FUN_00fab1e0(&local_2c,param_2[1],param_2[2]);
    uVar3 = local_28;
    uVar2 = local_24;
    if (local_2c == 1) goto LAB_01578fa4;
    break;
  default:
    goto switchD_01578f4c_default;
  }
  if (param_4 != 0) {
LAB_0157901c:
    if (((param_3[1] == uVar2) && (iVar1 = thunk_FUN_016dd50a(*param_3,uVar3,uVar2), iVar1 == 0)) ||
       ((param_4 != 1 &&
        (((param_3[3] == uVar2 && (iVar1 = thunk_FUN_016dd50a(param_3[2],uVar3,uVar2), iVar1 == 0))
         || ((param_4 != 2 &&
             (((param_3[5] == uVar2 &&
               (iVar1 = thunk_FUN_016dd50a(param_3[4],uVar3,uVar2), iVar1 == 0)) ||
              ((param_4 != 3 &&
               (((param_3[7] == uVar2 &&
                 (iVar1 = thunk_FUN_016dd50a(param_3[6],uVar3,uVar2), iVar1 == 0)) ||
                ((param_4 != 4 &&
                 ((param_3[9] == uVar2 &&
                  (iVar1 = thunk_FUN_016dd50a(param_3[8],uVar3,uVar2), iVar1 == 0))))))))))))))))))
    {
      uVar3 = param_2[1];
      uVar2 = param_2[2];
      uVar4 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      uVar3 = param_2[5];
      uVar2 = param_2[6];
      uVar4 = param_2[7];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      param_1[6] = uVar2;
      param_1[7] = uVar4;
      *param_2 = 0x80000015;
      return;
    }
  }
switchD_01578f4c_default:
  *param_1 = 0x80000015;
  return;
}

