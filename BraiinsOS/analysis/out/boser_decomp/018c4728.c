// FUN_018c4728 @ 018c4728 size=372 calls_out=8 calls_in=0
// strings: 

void FUN_018c4728(char *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_228 [96];
  undefined1 auStack_1c8 [232];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [116];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  if (*param_4 == -0x7ffffffe) {
    iVar3 = *param_3;
    FUN_018e1a6c(&local_238,iVar3);
    cVar2 = (char)local_238;
    if ((char)local_238 == '\x14') {
      *(undefined1 *)(iVar3 + 0x29) = 2;
      uVar4 = param_2[0x5b];
      FUN_01bed4e2(auStack_c8,param_2 + 0x5c,0x74);
      FUN_01bed4e2(auStack_228,param_2 + 4,0x60);
      local_54 = param_2[0x79];
      uStack_50 = param_2[0x7a];
      uStack_4c = param_2[0x7b];
      uStack_48 = param_2[0x7c];
      local_44 = param_2[0x7d];
      uStack_40 = param_2[0x7e];
      uStack_3c = param_2[0x7f];
      uStack_38 = param_2[0x80];
      uStack_34 = param_2[0x81];
      local_e0 = param_2[0x56];
      uStack_dc = param_2[0x57];
      uStack_d8 = param_2[0x58];
      uStack_d4 = param_2[0x59];
      uStack_d0 = param_2[0x5a];
      uVar1 = *(undefined1 *)(param_2 + 0x82);
      FUN_01bed4e2(auStack_1c8,param_2 + 0x1c,0xe8);
      local_238 = *param_2;
      uStack_234 = param_2[1];
      uStack_230 = param_2[2];
      uStack_22c = param_2[3];
      local_2f = *(undefined1 *)((int)param_2 + 0x209);
      local_cc = uVar4;
      local_30 = uVar1;
      iVar3 = thunk_FUN_01be5118(0x210);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x210);
      }
      FUN_01bed4e2(iVar3,&local_238,0x210);
      *param_1 = '\x14';
      *(int *)(param_1 + 4) = iVar3;
      *(undefined **)(param_1 + 8) = &DAT_01d22a60;
      FUN_018c4ac4(param_4);
      goto LAB_018c4880;
    }
    FUN_01bed4e2(param_1 + 1,(uint)&local_238 | 1,0xf);
    *param_1 = cVar2;
    FUN_018c4ac4(param_4);
  }
  else {
    FUN_018c4990(&local_238,param_4,"",1);
    *(undefined4 *)param_1 = local_238;
    *(undefined4 *)(param_1 + 4) = uStack_234;
    *(undefined4 *)(param_1 + 8) = uStack_230;
    *(undefined4 *)(param_1 + 0xc) = uStack_22c;
    FUN_018c4ac4(param_4);
  }
  FUN_018c4b30(param_2);
LAB_018c4880:
  thunk_FUN_01be4678(param_2);
  return;
}

