// FUN_00718a68 @ 00718a68 size=128 calls_out=0 calls_in=3
// strings: 

void FUN_00718a68(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  switch(*param_2) {
  case 2:
    uVar2 = (uint)*(byte *)(param_2 + 2);
    break;
  case 3:
    uVar2 = (uint)*(ushort *)(param_2 + 2);
    break;
  case 4:
    uVar2 = param_2[2];
    break;
  case 5:
  case 7:
    uVar2 = param_2[2];
    iVar3 = param_2[3];
    goto LAB_00718ad8;
  case 6:
    iVar3 = param_2[3];
    if (iVar3 < 0) {
      uVar1 = 0;
      goto LAB_00718ae4;
    }
    uVar2 = param_2[2];
    goto LAB_00718ad8;
  default:
    uVar1 = 0;
    goto LAB_00718ae4;
  }
  iVar3 = 0;
LAB_00718ad8:
  param_1[2] = uVar2;
  param_1[3] = iVar3;
  uVar1 = 1;
LAB_00718ae4:
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

