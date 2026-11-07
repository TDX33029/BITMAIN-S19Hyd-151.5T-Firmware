// FUN_0157f454 @ 0157f454 size=304 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0157f454(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_28;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)*param_1;
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  FUN_0157a340(&local_28,*puVar2,&DAT_00418df9,1);
  if ((char)local_28 == '\x04') {
    if (iVar4 != 0) {
      iVar1 = FUN_0157f594(iVar3,param_1);
      if (iVar1 == 0) {
        if (iVar4 != 1) {
          iVar4 = iVar4 * 0x18 + -0x18;
          do {
            iVar3 = iVar3 + 0x18;
            FUN_0157a340(&local_28,*puVar2,&DAT_004144ea,1);
            if ((char)local_28 != '\x04') goto LAB_0157f4dc;
            iVar1 = FUN_0157f594(iVar3,param_1);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar4 = iVar4 + -0x18;
          } while (iVar4 != 0);
        }
        FUN_0157a340(&local_28,*puVar2,&DAT_00418ec5,1);
        iVar1 = 0;
        if ((char)local_28 != '\x04') {
          iVar3 = FUN_0157c4a0(local_28,uStack_24);
          return iVar3;
        }
      }
      return iVar1;
    }
    FUN_0157a340(&local_28,*puVar2,&DAT_00418ec5,1);
    if ((local_28 & 0xff) == 4) {
      return 0;
    }
  }
LAB_0157f4dc:
  iVar3 = FUN_0157c4a0(local_28,uStack_24);
  return iVar3;
}

