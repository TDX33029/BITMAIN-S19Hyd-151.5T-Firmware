// FUN_015789cc @ 015789cc size=460 calls_out=1 calls_in=1
// strings: 

void FUN_015789cc(uint *param_1,byte *param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    *(undefined1 *)((int)param_1 + 1) = param_4;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 1;
    return;
  }
  uVar1 = (uint)*param_2;
  if ((uVar1 - 0x3a & 0xff) < 0xf6) {
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (uVar1 < 0xe0) {
        uVar1 = param_2[1] & 0x3f | (uVar1 & 0x1f) << 6;
      }
      else {
        uVar4 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar1 < 0xf0) {
          uVar1 = uVar4 | (uVar1 & 0x1f) << 0xc;
        }
        else {
          uVar1 = param_2[3] & 0x3f | uVar4 << 6 | (uVar1 & 7) << 0x12;
        }
      }
    }
    *(undefined1 *)((int)param_1 + 1) = param_4;
    param_1[1] = uVar1;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 2;
    return;
  }
  uVar1 = uVar1 - 0x30 & 0xff;
  if (param_3 == 1) {
    uVar4 = 0;
    iVar6 = 1;
  }
  else {
    iVar6 = 1;
    uVar4 = 0;
    do {
      iVar5 = (int)(char)param_2[iVar6];
      if ((iVar5 - 0x3aU & 0xff) < 0xf6) {
        if (iVar5 < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,iVar6,param_3,&DAT_018a92cc);
        }
        goto LAB_01578b00;
      }
      if (uVar1 == 0 && uVar4 == 0) {
        *(undefined1 *)((int)param_1 + 1) = param_4;
        param_1[2] = 0;
        *(undefined1 *)param_1 = 5;
        return;
      }
      uVar3 = (uint)((ulonglong)uVar1 * 10);
      uVar7 = (uint)((ulonglong)uVar1 * 10 >> 0x20);
      uVar1 = (uint)((ulonglong)uVar4 * 10);
      uVar2 = uVar7 + uVar1;
      if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0 || CARRY4(uVar7,uVar1)) {
LAB_01578b5c:
        *(undefined1 *)((int)param_1 + 1) = param_4;
        param_1[2] = 0;
        *(undefined1 *)param_1 = 6;
        return;
      }
      uVar7 = iVar5 - 0x30U & 0xff;
      uVar1 = uVar3 + uVar7;
      uVar4 = uVar2 + CARRY4(uVar3,uVar7);
      if (CARRY4(uVar2,(uint)CARRY4(uVar3,uVar7))) goto LAB_01578b5c;
      iVar6 = iVar6 + 1;
    } while (param_3 != iVar6);
    iVar6 = param_3;
  }
LAB_01578b00:
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = (uint)(param_2 + iVar6);
  param_1[3] = param_3 - iVar6;
  return;
}

