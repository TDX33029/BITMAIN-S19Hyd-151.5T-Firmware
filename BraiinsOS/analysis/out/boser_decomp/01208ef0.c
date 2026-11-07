// FUN_01208ef0 @ 01208ef0 size=164 calls_out=0 calls_in=0
// strings: 

int FUN_01208ef0(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x586ab8d && param_2[2] == 0x44cad86b) &&
      (param_2[1] == -0x7d0c8df4 && param_2[3] == 0x41eac7bb)) {
    iVar1 = param_1 + 0x24;
  }
  else {
    iVar1 = 0;
    if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
        (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
      iVar1 = param_1 + 0x1c;
    }
  }
  return iVar1;
}

