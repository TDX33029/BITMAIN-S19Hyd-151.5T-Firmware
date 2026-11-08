// FUN_012238b0 @ 012238b0 size=292 calls_out=3 calls_in=1
// strings: 

void FUN_012238b0(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  double dVar4;
  undefined1 uStack_9;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  switch(uVar2) {
  case 1:
    uVar2 = (uint)(byte)param_2[1];
    goto LAB_012239a4;
  case 2:
    uVar2 = (uint)(ushort)param_2[1];
    goto LAB_012239a4;
  case 3:
    uVar2 = param_2[1];
LAB_012239a4:
    uVar1 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
LAB_012239c0:
    *param_1 = 2;
    param_1[1] = uVar1;
    break;
  case 4:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = 2;
    uVar1 = FUN_01bf0958(uVar2,uVar3);
    goto LAB_01223994;
  case 5:
    uVar2 = (uint)(char)param_2[1];
    goto LAB_012239bc;
  case 6:
    uVar2 = (uint)(short)param_2[1];
    goto LAB_012239bc;
  case 7:
    uVar2 = param_2[1];
LAB_012239bc:
    uVar1 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    goto LAB_012239c0;
  case 8:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = 2;
    uVar1 = FUN_01bf0f18(uVar2,uVar3);
LAB_01223994:
    param_1[1] = uVar1;
    break;
  case 9:
    uVar2 = param_2[1];
    *param_1 = 2;
    param_1[1] = uVar2;
    break;
  case 10:
    dVar4 = *(double *)(param_2 + 2);
    uVar2 = 0xbf800000;
    *param_1 = 2;
    if ((uint)((ulonglong)dVar4 >> 0x20) < 0x80000000) {
      uVar2 = 0;
    }
    param_1[1] = (uint)ABS((float)dVar4) | uVar2 & 0x80000000;
    break;
  default:
    FUN_01222458(param_1,param_2,&uStack_9,&DAT_01c2496c);
  }
  return;
}

