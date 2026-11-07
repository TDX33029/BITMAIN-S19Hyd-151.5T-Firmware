// FUN_01706d8c @ 01706d8c size=404 calls_out=4 calls_in=1
// strings: 

void FUN_01706d8c(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  
  while( true ) {
    (**(code **)(param_2[0x15] + 0xc))(&local_68,param_2[0x14],param_3);
    if (local_68 == 6 && local_64 == 0) {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    if ((local_68 & 7) == 4) {
      param_1[1] = 0;
      param_1[2] = local_60;
      *param_1 = 4;
      param_1[3] = local_5c;
      return;
    }
    if (local_68 == 5) {
      iVar1 = *param_2;
      iVar2 = param_2[1];
      *param_2 = 4;
      param_2[1] = 0;
      if (iVar1 == 4 && iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_0050d9a7,0x15,&DAT_01d19090);
      }
      FUN_01bed4e2(param_1 + 2,param_2 + 2,0x48);
      *param_1 = iVar1;
      param_1[1] = iVar2;
      return;
    }
    if (*param_2 == 4 && param_2[1] == 0) break;
    FUN_01766208(param_2,&local_68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d19080);
}

