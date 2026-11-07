// FUN_0070a078 @ 0070a078 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_0070a078(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 local_94 [28];
  uint local_78;
  uint local_74;
  undefined1 local_70;
  undefined1 auStack_6f [79];
  
  iVar1 = param_2 + 0x98;
  local_94[0] = 2;
  FUN_00709c30(&local_78,param_2,iVar1,local_94);
  if (local_78 == 0xf && local_74 == 0) {
    FUN_0071201c(&local_78,param_2 + 0x20,iVar1);
    if (local_78 == 0xf && local_74 == 0) {
      FUN_0070f10c(&local_78,iVar1);
      if (((char)local_78 == '\x04') || ((local_78 & 0xff) == 4)) {
        *param_1 = 0xf;
        param_1[1] = 0;
        *(undefined1 *)(param_2 + 0x91) = 0;
      }
      else {
        param_1[1] = 0;
        *param_1 = 5;
        param_1[2] = local_78;
        param_1[3] = local_74;
      }
    }
    else {
      FUN_01bed4e2(param_1 + 2,&local_70,0x50);
      *param_1 = local_78;
      param_1[1] = local_74;
    }
  }
  else {
    FUN_01bed4e2((int)param_1 + 9,auStack_6f,0x4f);
    *param_1 = local_78;
    param_1[1] = local_74;
    *(undefined1 *)(param_1 + 2) = local_70;
  }
  return;
}

