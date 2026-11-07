// FUN_0151c80c @ 0151c80c size=344 calls_out=9 calls_in=2
// strings: 

undefined8 FUN_0151c80c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  uint unaff_r8;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  uint local_24;
  
  FUN_0172aab0(auStack_40);
  iVar4 = 0;
  uVar3 = 0;
  if (param_4 != 0) {
    uVar3 = FUN_00605900(param_4 + 0x18,extraout_r1,0);
  }
  local_28 = 0;
  iVar2 = FUN_0173e5f0(auStack_40,&local_28,uVar3,0,param_1);
  if (iVar2 == 1) {
    iVar4 = 0;
    local_24 = 0;
    iVar2 = FUN_0173ee3c(auStack_40,0,&local_24,param_2,param_3);
    uVar1 = local_24;
    if ((iVar2 == 1) && (local_24 != 0)) {
      if ((int)local_24 < 0) {
        unaff_r8 = 0;
      }
      else {
        unaff_r8 = 1;
        iVar4 = FUN_016d38c8(local_24,1);
        if (iVar4 != 0) {
          iVar2 = FUN_0173ee3c(auStack_40,iVar4,&local_24,param_2,param_3);
          if (iVar2 == 1) {
            unaff_r8 = local_24;
            if (uVar1 <= local_24) {
              unaff_r8 = uVar1;
            }
            if (unaff_r8 < uVar1) {
              if (unaff_r8 == 0) {
                thunk_FUN_016d3fb4(iVar4);
                iVar4 = 1;
              }
              else {
                iVar4 = thunk_FUN_016d4ea4(iVar4,unaff_r8);
                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,unaff_r8);
                }
              }
            }
          }
          else {
            thunk_FUN_016d3fb4(iVar4);
            iVar4 = 0;
          }
          goto LAB_0151c934;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(unaff_r8,uVar1);
    }
  }
LAB_0151c934:
  FUN_0172aae8(auStack_40);
  return CONCAT44(unaff_r8,iVar4);
}

