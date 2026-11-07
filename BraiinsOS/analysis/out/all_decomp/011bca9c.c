// FUN_011bca9c @ 011bca9c size=456 calls_out=5 calls_in=3
// strings: 

void FUN_011bca9c(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
LAB_011bcab4:
  do {
    FUN_011bcdb4(&local_2c,param_2);
    if ((char)local_2c == '\x01') {
LAB_011bcd30:
      *param_1 = 2;
      param_1[1] = local_28;
      return;
    }
    if (local_2c._1_1_ != 0x5c) {
      if (local_2c._1_1_ == 0x22) {
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        uVar3 = *(undefined4 *)(param_2 + 0x14);
        FUN_00fab1e0(&local_38,param_3[1],param_3[2]);
        if (local_38 != 1) {
          *param_1 = 1;
          param_1[1] = uStack_34;
          param_1[2] = uStack_30;
          return;
        }
        local_2c = 0xf;
      }
      else {
        if (0x1f < local_2c._1_1_) {
          iVar1 = *param_3;
          bVar4 = local_2c._1_1_;
          goto LAB_011bcaec;
        }
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        uVar3 = *(undefined4 *)(param_2 + 0x14);
        local_2c = 0x10;
      }
LAB_011bcd90:
      iVar1 = FUN_0157c50c(&local_2c,uVar2,uVar3);
      goto LAB_011bcd94;
    }
    FUN_011bcdb4(&local_2c,param_2);
    if ((char)local_2c == '\x01') goto LAB_011bcd30;
    switch(local_2c >> 8 & 0xff) {
    case 0x22:
      iVar1 = *param_3;
      bVar4 = 0x22;
      break;
    default:
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 0x14);
      local_2c = 0xc;
      goto LAB_011bcd90;
    case 0x2f:
      iVar1 = *param_3;
      bVar4 = 0x2f;
      break;
    case 0x5c:
      iVar1 = *param_3;
      bVar4 = 0x5c;
      break;
    case 0x62:
      iVar1 = *param_3;
      bVar4 = 8;
      break;
    case 0x66:
      iVar1 = *param_3;
      bVar4 = 0xc;
      break;
    case 0x6e:
      iVar1 = *param_3;
      bVar4 = 10;
      break;
    case 0x72:
      iVar1 = *param_3;
      bVar4 = 0xd;
      break;
    case 0x74:
      iVar1 = *param_3;
      bVar4 = 9;
      break;
    case 0x75:
      goto switchD_011bcb3c_caseD_75;
    }
LAB_011bcaec:
    iVar5 = param_3[2];
    if (iVar5 == iVar1) {
      FUN_006029c0(param_3);
    }
    *(byte *)(param_3[1] + iVar5) = bVar4;
    param_3[2] = iVar5 + 1;
  } while( true );
switchD_011bcb3c_caseD_75:
  iVar1 = FUN_011bcea4(param_2,param_3);
  if (iVar1 != 0) {
LAB_011bcd94:
    *param_1 = 2;
    param_1[1] = iVar1;
    return;
  }
  goto LAB_011bcab4;
}

