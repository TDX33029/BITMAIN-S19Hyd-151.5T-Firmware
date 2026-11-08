// FUN_01223a00 @ 01223a00 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_01223a00(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint in_fpscr;
  longlong lVar2;
  double dVar3;
  undefined1 uStack_9;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    uVar1 = (uint)(byte)param_2[1];
    break;
  case 2:
    uVar1 = (uint)(ushort)param_2[1];
    break;
  case 3:
    uVar1 = param_2[1];
    break;
  case 4:
    lVar2 = FUN_01bf0e80(param_2[2],param_2[3]);
    goto LAB_01223a90;
  case 5:
    uVar1 = (uint)(char)param_2[1];
    goto LAB_01223ac0;
  case 6:
    uVar1 = (uint)(short)param_2[1];
    goto LAB_01223ac0;
  case 7:
    uVar1 = param_2[1];
LAB_01223ac0:
    lVar2 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    goto LAB_01223ac4;
  case 8:
    lVar2 = FUN_01bf0cac(param_2[2],param_2[3]);
LAB_01223a90:
    *param_1 = 2;
    goto LAB_01223acc;
  case 9:
    uVar1 = 0xbff00000;
    dVar3 = (double)(float)param_2[1];
    if (param_2[1] < 0x80000000) {
      uVar1 = 0;
    }
    *param_1 = 2;
    lVar2 = ((ulonglong)((uint)((ulonglong)dVar3 >> 0x20) & 0x7fffffff | uVar1 & 0x80000000) << 0x20
            ) + ((ulonglong)dVar3 & 0xffffffff);
    goto LAB_01223acc;
  case 10:
    lVar2 = *(longlong *)(param_2 + 2);
    goto LAB_01223ac4;
  default:
    FUN_01222458(param_1,param_2,&uStack_9,&DAT_01c2497c);
    return;
  }
  lVar2 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
LAB_01223ac4:
  *param_1 = 2;
LAB_01223acc:
  *(longlong *)(param_1 + 2) = lVar2;
  return;
}

