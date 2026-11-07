// FUN_01499cfc @ 01499cfc size=124 calls_out=2 calls_in=0
// strings: 1.15.0 | BUG: GRPC API version is not in semver formatvariant identifier

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01499cfc(int *param_1)

{
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_01961b0c(&local_40,"1.15.0",6);
  if (local_40 == 0) {
    iStack_18 = iStack_3c;
    iStack_14 = iStack_38;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: GRPC API version is not in semver formatvariant identifier",0x2d,&iStack_18,
                 &DAT_01cf932c);
  }
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[5] = local_2c;
  param_1[6] = iStack_28;
  param_1[7] = iStack_24;
  param_1[8] = iStack_20;
  param_1[9] = iStack_1c;
  return;
}

