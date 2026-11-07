// FUN_0190e6e8 @ 0190e6e8 size=412 calls_out=8 calls_in=0
// strings: 

void FUN_0190e6e8(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int local_15c;
  undefined1 auStack_158 [96];
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_d4 [116];
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  if ((undefined1 *)*param_4 == &DAT_80000004) {
    iVar2 = *param_3;
    FUN_018f3128(&local_160,iVar2);
    if (local_160 == -0x7fffffd7) {
      *(undefined1 *)(iVar2 + 0x32) = 2;
      iVar2 = param_2[0x40];
      FUN_01bed4e2(auStack_d4,param_2 + 0x23,0x74);
      FUN_01bed4e2(auStack_158,param_2 + 2,0x60);
      local_f8 = param_2[0x1a];
      iStack_f4 = param_2[0x1b];
      iStack_f0 = param_2[0x1c];
      iStack_ec = param_2[0x1d];
      local_e8 = param_2[0x1e];
      iStack_e4 = param_2[0x1f];
      iStack_e0 = param_2[0x20];
      iStack_dc = param_2[0x21];
      iStack_d8 = param_2[0x22];
      local_5c = param_2[0x41];
      iStack_58 = param_2[0x42];
      iStack_54 = param_2[0x43];
      iStack_50 = param_2[0x44];
      iStack_4c = param_2[0x45];
      local_2c = (undefined1)param_2[0x4d];
      local_48 = param_2[0x46];
      iStack_44 = param_2[0x47];
      iStack_40 = param_2[0x48];
      local_3c = param_2[0x49];
      iStack_38 = param_2[0x4a];
      iStack_34 = param_2[0x4b];
      iStack_30 = param_2[0x4c];
      local_160 = *param_2;
      local_15c = param_2[1];
      local_2b = *(undefined1 *)((int)param_2 + 0x135);
      local_60 = iVar2;
      iVar2 = thunk_FUN_01be5118(0x138);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x138);
      }
      FUN_01bed4e2(iVar2,&local_160,0x138);
      *param_1 = -0x7fffffd7;
      param_1[1] = iVar2;
      param_1[2] = (int)&DAT_01d25138;
      FUN_0190eb24(param_4);
      thunk_FUN_01be4678(param_2);
      return;
    }
    piVar1 = (int *)((uint)&local_160 | 4);
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    param_1[1] = *piVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    iVar2 = piVar1[4];
    iVar3 = piVar1[5];
    iVar4 = piVar1[6];
    param_1[4] = piVar1[3];
    param_1[5] = iVar2;
    param_1[6] = iVar3;
    param_1[7] = iVar4;
    *param_1 = local_160;
    FUN_0190eb24(param_4);
  }
  else {
    FUN_01bed4e2(&local_160,param_4,0x78);
    FUN_0191d928(&local_180,local_160,"",1);
    *param_1 = local_180;
    param_1[1] = iStack_17c;
    param_1[2] = iStack_178;
    param_1[3] = iStack_174;
    param_1[4] = local_170;
    param_1[5] = iStack_16c;
    param_1[6] = iStack_168;
    param_1[7] = iStack_164;
    FUN_0190eb24(&local_160);
  }
  FUN_0190ebac(param_2);
  return;
}

