// FUN_00e9da70 @ 00e9da70 size=276 calls_out=2 calls_in=0
// strings: 

bool FUN_00e9da70(int *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint3 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_1c;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_1c = param_2 & 0xff;
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar7 = uVar9 + 1;
    if (uVar8 < uVar7) goto LAB_00e9db58;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_1c = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar8 = param_1[1];
      uVar9 = param_1[2];
      uVar7 = uVar9 + 2;
      if (uVar8 < uVar7) goto LAB_00e9db58;
    }
    else {
      bVar3 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        bVar5 = bVar3 | 0xe0;
        uVar4 = (CONCAT11(uVar1,uVar2) & 0xff3f | 0x80) & 0xff3fff | 0x8000;
        iVar6 = 3;
      }
      else {
        iVar6 = 4;
        bVar5 = (byte)(param_2 >> 0x12) | 0xf0;
        uVar4 = CONCAT21(CONCAT11(uVar1,uVar2),bVar3) & 0x3f3f3f | 0x808080;
      }
      local_1c = CONCAT31(uVar4,bVar5);
      uVar8 = param_1[1];
      uVar9 = param_1[2];
      uVar7 = uVar9 + iVar6;
      if (uVar8 < uVar7) goto LAB_00e9db58;
    }
  }
  if (uVar7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar9,uVar7,uVar8,&DAT_018a92fc);
  }
  FUN_016dd1aa(*param_1 + uVar9,&local_1c);
  param_1[2] = uVar7;
LAB_00e9db58:
  return uVar8 < uVar7;
}

