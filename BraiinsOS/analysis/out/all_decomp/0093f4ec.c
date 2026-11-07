// FUN_0093f4ec @ 0093f4ec size=784 calls_out=5 calls_in=4
// strings: 

void FUN_0093f4ec(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint in_fpscr;
  longlong lVar6;
  double dVar7;
  uint local_80;
  float local_7c;
  uint local_78;
  uint uStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined1 uStack_29;
  
  uVar4 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar4 < 0) {
    uVar2 = uVar4 ^ 0x80000000;
  }
  if (uVar2 == 0x10) {
LAB_0093f528:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 2;
    goto joined_r0x0093f710;
  }
  if (uVar2 != 0x11) {
    if (uVar2 == 0x12) goto LAB_0093f528;
    switch(uVar2) {
    case 1:
      uVar2 = (uint)(byte)param_2[1];
      goto LAB_0093f69c;
    case 2:
      uVar2 = (uint)(ushort)param_2[1];
LAB_0093f69c:
      lVar6 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      break;
    case 3:
      lVar6 = VectorUnsignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
      break;
    case 4:
      lVar6 = FUN_01845f30(param_2[2],param_2[3]);
      break;
    case 5:
      iVar3 = (int)(char)param_2[1];
      goto LAB_0093f72c;
    case 6:
      iVar3 = (int)(short)param_2[1];
LAB_0093f72c:
      lVar6 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      break;
    case 7:
      lVar6 = VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
      break;
    case 8:
      lVar6 = FUN_01845d5c(param_2[2],param_2[3]);
      break;
    case 9:
      uVar2 = 0xbff00000;
      dVar7 = (double)(float)param_2[1];
      if (param_2[1] < 0x80000000) {
        uVar2 = 0;
      }
      lVar6 = ((ulonglong)((uint)((ulonglong)dVar7 >> 0x20) & 0x7fffffff | uVar2 & 0x80000000) <<
              0x20) + ((ulonglong)dVar7 & 0xffffffff);
      break;
    case 10:
      lVar6 = *(longlong *)(param_2 + 2);
      break;
    default:
      FUN_008f73e8(&local_70,param_2,&uStack_29,&DAT_018673a8);
      if (local_70 != 2) {
        *param_1 = local_70;
        param_1[1] = iStack_6c;
        param_1[2] = local_68;
        param_1[3] = iStack_64;
        param_1[4] = iStack_60;
        param_1[5] = iStack_5c;
        param_1[6] = local_58;
        param_1[7] = iStack_54;
        param_1[8] = iStack_50;
        param_1[9] = iStack_4c;
        param_1[10] = iStack_48;
        param_1[0xb] = iStack_44;
        return;
      }
      lVar6 = CONCAT44(iStack_64,local_68);
      goto LAB_0093f77c;
    }
    FUN_008f7448(param_2);
LAB_0093f77c:
    param_1[2] = 1;
    param_1[3] = 0;
    *(longlong *)(param_1 + 4) = lVar6;
    *param_1 = 2;
    return;
  }
  puVar5 = (uint *)param_2[1];
  local_80 = *puVar5;
  local_7c = (float)puVar5[1];
  local_78 = puVar5[2];
  uStack_74 = puVar5[3];
  lVar6 = *(longlong *)(puVar5 + 2);
  uVar2 = 0x15;
  if ((int)local_80 < 0) {
    uVar2 = local_80 ^ 0x80000000;
  }
  cVar1 = local_7c._0_1_;
  switch(uVar2) {
  case 1:
    uVar2 = (uint)local_7c & 0xff;
    goto LAB_0093f650;
  case 2:
    uVar2 = (uint)local_7c & 0xffff;
LAB_0093f650:
    lVar6 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    break;
  case 3:
    lVar6 = VectorUnsignedToFloat(local_7c,(byte)(in_fpscr >> 0x16) & 3);
    break;
  case 4:
    lVar6 = FUN_01845f30(local_78,uStack_74);
    break;
  case 5:
    iVar3 = (int)cVar1;
    goto LAB_0093f68c;
  case 6:
    iVar3 = (int)local_7c._0_2_;
LAB_0093f68c:
    lVar6 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    break;
  case 7:
    lVar6 = VectorSignedToFloat(local_7c,(byte)(in_fpscr >> 0x16) & 3);
    break;
  case 8:
    lVar6 = FUN_01845d5c(local_78,uStack_74);
    break;
  case 9:
    uVar2 = 0xbff00000;
    if ((uint)local_7c < 0x80000000) {
      uVar2 = 0;
    }
    lVar6 = ((ulonglong)
             ((uint)((ulonglong)(double)local_7c >> 0x20) & 0x7fffffff | uVar2 & 0x80000000) << 0x20
            ) + ((ulonglong)(double)local_7c & 0xffffffff);
    break;
  case 10:
    break;
  default:
    local_34 = puVar5[3];
    local_3c = puVar5[1];
    local_38 = puVar5[2];
    local_40 = *puVar5;
    FUN_008f73e8(&local_70,&local_40,&uStack_29,&DAT_018673a8);
    if (local_70 == 2) {
      lVar6 = CONCAT44(iStack_64,local_68);
      goto LAB_0093f6ec;
    }
    *param_1 = local_70;
    param_1[1] = iStack_6c;
    param_1[2] = local_68;
    param_1[3] = iStack_64;
    param_1[4] = iStack_60;
    param_1[5] = iStack_5c;
    param_1[6] = local_58;
    param_1[7] = iStack_54;
    param_1[8] = iStack_50;
    param_1[9] = iStack_4c;
    param_1[10] = iStack_48;
    param_1[0xb] = iStack_44;
    goto LAB_0093f704;
  }
  FUN_008f7448(&local_80);
LAB_0093f6ec:
  param_1[2] = 1;
  param_1[3] = 0;
  *(longlong *)(param_1 + 4) = lVar6;
  *param_1 = 2;
LAB_0093f704:
  thunk_FUN_016d3fb4(puVar5);
joined_r0x0093f710:
  if (uVar4 == 0x80000011) {
    return;
  }
  FUN_008f7448(param_2);
  return;
}

