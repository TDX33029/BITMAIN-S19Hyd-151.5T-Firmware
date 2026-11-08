// FUN_01222a98 @ 01222a98 size=264 calls_out=4 calls_in=2
// strings: 

void FUN_01222a98(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint in_fpscr;
  longlong lVar2;
  double dVar3;
  undefined1 uStack_11;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    uVar1 = (uint)(byte)param_2[1];
    goto LAB_01222b3c;
  case 2:
    uVar1 = (uint)(ushort)param_2[1];
    goto LAB_01222b3c;
  case 3:
    uVar1 = param_2[1];
LAB_01222b3c:
    lVar2 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    break;
  case 4:
    lVar2 = FUN_01bf0e80(param_2[2],param_2[3]);
    break;
  case 5:
    uVar1 = (uint)(char)param_2[1];
    goto LAB_01222b54;
  case 6:
    uVar1 = (uint)(short)param_2[1];
    goto LAB_01222b54;
  case 7:
    uVar1 = param_2[1];
LAB_01222b54:
    lVar2 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    break;
  case 8:
    lVar2 = FUN_01bf0cac(param_2[2],param_2[3]);
    break;
  case 9:
    uVar1 = 0xbff00000;
    dVar3 = (double)(float)param_2[1];
    if (param_2[1] < 0x80000000) {
      uVar1 = 0;
    }
    lVar2 = ((ulonglong)((uint)((ulonglong)dVar3 >> 0x20) & 0x7fffffff | uVar1 & 0x80000000) << 0x20
            ) + ((ulonglong)dVar3 & 0xffffffff);
    break;
  case 10:
    lVar2 = *(longlong *)(param_2 + 2);
    break;
  default:
    FUN_012223f8(param_1,param_2,&uStack_11,&DAT_01c2497c);
    return;
  }
  *(longlong *)(param_1 + 2) = lVar2;
  *param_1 = 2;
  FUN_012222e0(param_2);
  return;
}

